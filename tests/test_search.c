#include <assert.h>
#include <stddef.h>
#include "algo.h"

int main(void) {
    int a[] = {1, 2, 4, 5, 8, 13};
    assert(binary_search_int(a, 6, 1)  == 0);
    assert(binary_search_int(a, 6, 4)  == 2);
    assert(binary_search_int(a, 6, 13) == 5);
    assert(binary_search_int(a, 6, 7)  == -1);
    return 0;
}
