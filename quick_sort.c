#include "quick_sort.h"

int partition(void* data, int l, int r, size_t size, int(*comp)(void*,void*),void(*swap)(void*,void*),void*(*next)(void*,int n))
{
    void* p = malloc(size);
    p = next(data, l);
    int i = l;
    int j = r + 1;
    do
    {
        do
        {
            i++;
        }while(comp(next(data, i), p) < 0);

        do
        {
            j--;
        }while(comp(next(data, j), p) > 0);
        swap(next(data, i), next(data, j));
    }while( i < j);
    swap(next(data, i), next(data, j));
    swap(next(data, l), next(data, j));
    free(p);
    return j;
}

void quick_sort(void* data, int l, int r, size_t size, int(*comp)(void*,void*), void(*swap)(void*,void*),void*(*next)(void*,int n))
{
    if(l<r)
    {
        int s = partition(data, l, r,size, comp,swap,next);
        quick_sort(data, l, s-1, size, comp, swap, next);
        quick_sort(data, s+1, r, size, comp, swap, next);
    }
}
