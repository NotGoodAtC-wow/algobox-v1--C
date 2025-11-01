#include "algo.h"

void swap_int(int *x, int *y) {
    int t = *x; *x = *y; *y = t;
}

void bubble_sort_int(int *a, size_t n) {
    if (!a || n <= 1) return;
    for (size_t i = 0; i < n; ++i) {
        int swapped = 0;
        for (size_t j = 1; j < n - i; ++j) {
            if (a[j - 1] > a[j]) {
                swap_int(&a[j - 1], &a[j]);
                swapped = 1;
            }
        }
        if (!swapped) break; // уже отсортировано
    }
}
