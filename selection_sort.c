#include "selection_sort.h"

void selection_sort(void* data, int n, int(*comp)(void*,void*), void(*swap)(void*,void*), void*(*next)(void*, int))
{
    int i,j,min;
    for(i=0;i<n-1;i++)
    {
        min = i;
        for(j=i+1;j<n;j++)
        {
            if(comp(next(data,min), next(data,j)) < 0)
            {
                min = j;
            }
        }
        swap(next(data,i), next(data,min));
    }
}
