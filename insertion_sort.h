#ifndef INSERTION_SORT_H_INCLUDED
#define INSERTION_SORT_H_INCLUDED

#include <stdlib.h>

void insertion_sort(void* data, int n, size_t size, int(*comp)(void*,void*), void*(*next)(void*,int), void(*copy)(void*,void*));

#endif // INSERTION_SORT_H_INCLUDED
