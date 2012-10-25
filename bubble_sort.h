#ifndef BUBBLE_SORT_H_INCLUDED
#define BUBBLE_SORT_H_INCLUDED
#include <stdlib.h>
void bubble_sort(void *data, int n, int (*comp)(void*,void*), void (*swap)(void*,void*), void*(*next)(void*, int));

#endif // BUBBLE_SORT_H_INCLUDED
