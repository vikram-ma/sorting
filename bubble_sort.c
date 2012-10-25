#include "bubble_sort.h"
#include <stdio.h>
void bubble_sort(void *data, int n, int (*comp)(void*,void*), void (*swap)(void*,void*),void*(*next)(void*, int))
{
    int i,j;
	for (i = 0; i < n-1; i++)
	{
		for(j = 0; j < n-1-i; j++)
		{
			if(comp(next(data,j), next(data,j+1)) < 0)
			{
				swap(next(data,j), next(data,j+1));
			}
		}
	}
}
