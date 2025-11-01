#include <stdio.h>
#include "algo.h"

static void demo_gcd(void) {
    int a = 84, b = 30;
    printf("[gcd] gcd(%d, %d) = %d\n", a, b, gcd_int(a, b));
}

static void demo_sort(void) {
    int arr[] = {5, 1, 4, 2, 8};
    size_t n = sizeof(arr)/sizeof(arr[0]);
    bubble_sort_int(arr, n);
    printf("[sort] ");
    for (size_t i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

static void demo_search(void) {
    int arr[] = {1, 2, 4, 5, 8, 13};
    int key = 8;
    int idx = binary_search_int(arr, 6, key);
    printf("[search] key=%d → idx=%d\n", key, idx);
}

int main(void) {
    demo_gcd();
    demo_sort();
    demo_search();
    return 0;
}
