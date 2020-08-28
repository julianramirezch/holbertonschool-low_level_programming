#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int *shell_sort(int *array, size_t size);
void print_array(const int *array, int l, int r);
int jump_search(int *array, size_t size, int value);


#endif
