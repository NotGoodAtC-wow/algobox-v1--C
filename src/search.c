#include "algo.h"

int binary_search_int(const int *a, size_t n, int key) {
    size_t L = 0, R = n; // полуинтервал [L, R)
    while (L < R) {
        size_t M = L + (R - L) / 2;
        int v = a[M];
        if (v == key) return (int)M;
        else if (v < key) L = M + 1;
        else R = M;
    }
    return -1;
}
