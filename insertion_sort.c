#include "insertion_sort.h"
#include <malloc.h>

void insertion_sort(void* data, int n, size_t size, int(*comp)(void*,void*), void*(*next)(void*,int), void(*copy)(void*, void*))
{
    int i,j;
    void *v;
    v = malloc(size);
    for(i = 1; i < n; i++)
    {
        copy(v, next(data, i));
        j = i-1;
        while(j >= 0 && comp(next(data,j),v) < 0)
        {
            copy(next(data, j+1), next(data,j));
            j--;
        }

        copy(next(data,j+1), v);
    }
    free(v);
}
