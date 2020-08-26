#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binarySearch(int *array, size_t left, size_t right, int value);
int binary_search(int *array, size_t size, int value);
#endif /* SEARCH_ALGOS_H */
