#include <assert.h>
#include <stddef.h>
#include "algo.h"

static int is_sorted(const int *a, size_t n) {
    for (size_t i = 1; i < n; ++i) if (a[i-1] > a[i]) return 0;
    return 1;
}

int main(void) {
    int a1[] = {5, 1, 4, 2, 8};
    bubble_sort_int(a1, 5);
    assert(is_sorted(a1, 5));

    int a2[] = {1};
    bubble_sort_int(a2, 1);
    assert(is_sorted(a2, 1));

    int *a3 = 0;
    bubble_sort_int(a3, 0); // не падаем
    return 0;
}
