#include <assert.h>
#include "algo.h"

int main(void) {
    assert(gcd_int(20, 12) == 4);
    assert(gcd_int(-14, 21) == 7);
    assert(gcd_int(0, 5) == 5);
    assert(gcd_int(0, 0) == 0);
    return 0;
}
