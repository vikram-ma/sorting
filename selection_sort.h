#ifndef SELECTION_SORT_H_INCLUDED
#define SELECTION_SORT_H_INCLUDED

void selection_sort(void* data, int n, int(*comp)(void*,void*), void(*swap)(void*,void*), void*(*next)(void*, int));

#endif // SELECTION_SORT_H_INCLUDED
