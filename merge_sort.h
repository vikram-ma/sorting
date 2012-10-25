#ifndef MERGE_SORT_H_INCLUDED
#define MERGE_SORT_H_INCLUDED
#include <stdlib.h>

void merge_sort(void* data, int n, size_t size, int(*comp)(void*,void*), void*(*next)(void*,int), void(*copy)(void*,void*));

#endif // MERGE_SORT_H_INCLUDED
