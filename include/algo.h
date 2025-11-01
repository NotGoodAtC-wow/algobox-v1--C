#ifndef ALGO_H
#define ALGO_H

#include <stddef.h>

int  gcd_int(int a, int b);
void bubble_sort_int(int *a, size_t n);
int  binary_search_int(const int *a, size_t n, int key);
void swap_int(int *x, int *y);

#endif
