#ifndef QUICK_SORT_H_INCLUDED
#define QUICK_SORT_H_INCLUDED
#include <stdlib.h>

void quick_sort(void* data, int l, int r, size_t size, int(*comp)(void*,void*), void(*swap)(void*,void*),void*(*next)(void*,int));

#endif // QUICK_SORT_H_INCLUDED
