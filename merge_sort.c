#include "merge_sort.h"
#include <malloc.h>

void merge(void* b, void *c, void* data, int p, int q, int(*comp)(void*,void*), void*(*next)(void*,int), void(*copy)(void*,void*));

void merge_sort(void* data, int n, size_t size, int(*comp)(void*,void*), void*(*next)(void*,int), void(*copy)(void*,void*))
{
    if(n>1)
    {
        //copy first half into one array and second into other,
        void* b = malloc(size*(n/2));
        void* c = malloc(size*(n/2)+1);
        int i,count=0;
        for(i = 0; i < n/2; i++)
        {
            copy(next(b,i), next(data,i));
        }

        for(; i < n; i++)
        {
            copy(next(c,count), next(data,i));
            count++;
        }

        merge_sort(b, n/2, size, comp, next, copy);
        merge_sort(c, count ,size, comp, next, copy);
        merge(b, c, data, n/2, count, comp, next, copy);
        free(c);
        free(b);
    }
}

void merge(void* b, void *c, void* data, int p, int q, int(*comp)(void*,void*), void*(*next)(void*,int), void(*copy)(void*,void*))
{
    int i,j,k;
    i = j = k = 0;
    while(i < p && j < q)
    {
        if(comp(next(b,i), next(c,j)) < 0)
        {
            copy(next(data,k), next(c,j));
            j++;
        }
        else
        {
            copy(next(data,k), next(b,i));
            i++;
        }
        k++;
    }
    if(i == p)
    {
        for(; j < q; j++)
        {
            copy(next(data,k), next(c,j));
            k++;
        }
    }
    else
    {
        for(; i < p; i++)
        {
            copy(next(data,k), next(b,i));
            k++;
        }
    }
}
