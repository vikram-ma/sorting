#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"
#include "selection_sort.h"
#include "insertion_sort.h"
#include "merge_sort.h"
#include "quick_sort.h"

int intCompare(int* x, int* y)
{
	if((*x) <= (*y))
	{
	    //printf("%d is greater than %d\n", *y, *x);
	    return 1;
	}
	else
	{
	    //printf("%d is greater than %d\n", *x, *y);
	    return -1;
	}
}

void intSwap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int* intNext(int* data, int i)
{
    return (data+i);
}

void intCopy(int* x, int* y)
{
    //printf("Copied %d\n", *y);
    *x = *y;
    //printf("After copying %d\n", *x);
}

double* doubleNext(double* data, int i)
{
    return (data+i);
}

int doubleCompare(double* x, double *y)
{
    //printf("comparing %f, %f", *x, *y);
    if((*x) < (*y))
    {
        return 1;
    }
    else
        return -1;
}

void doubleSwap(double* x, double* y)
{
    double temp = *x;
	*x = *y;
	*y = temp;
}

void doubleCopy(double* x, double* y)
{
    *x = *y;
}
int main()
{
    int adata[] = {5, 6 , 1, 25, 99, 9, 3,-1 };
    double fdata[] = {5.6, 7.8, 1.2, 4.1, 9.9};
	//bubble_sort(adata, 7, (int(*)(void*, void*))intCompare,(void(*)(void*,void*))intSwap, (void*(*)(void*, int))intNext);
	//bubble_sort(fdata, 5, (int(*)(void*, void*))doubleCompare,(void(*)(void*,void*))doubleSwap,(void*(*)(void*,int))doubleNext);
	//selection_sort(adata, 7, (int(*)(void*, void*))intCompare,(void(*)(void*,void*))intSwap, (void*(*)(void*,int))intNext);
	//insertion_sort(adata, 8, sizeof(int), (int(*)(void*,void*))intCompare, (void*(*)(void*,int))intNext,(void(*)(void*,void*))intCopy);
	//insertion_sort(fdata, 5, sizeof(double), (int(*)(void*,void*))doubleCompare, (void*(*)(void*,int))doubleNext,(void(*)(void*,void*))doubleCopy);
	//merge_sort(adata, 8, sizeof(int), (int(*)(void*,void*))intCompare, (void*(*)(void*,int))intNext, (void(*)(void*,void*))intCopy);
	merge_sort(fdata, 5, sizeof(double), (int(*)(void*,void*))doubleCompare, (void*(*)(void*,int))doubleNext, (void(*)(void*,void*))doubleCopy);
	//quick_sort(adata, 0, 7, sizeof(int), (int(*)(void*, void*))intCompare, (void(*)(void*, void*))intSwap, (void*(*)(void*,int))intNext);
	int i;
	for(i = 0; i < 8; i++)
	{
		//printf("%d\t", adata[i]);
	}

	for(i = 0; i < 5; i++)
	{
		printf("%f\t", fdata[i]);
	}
	return 0;
}
