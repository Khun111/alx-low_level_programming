#ifndef SEARCH_H
#define SEARCH_H

#include <stdio.h>
#include <math.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int mybinary_search(int *array, size_t beg, size_t end, int value);

#endif /* SEARCH_H */
