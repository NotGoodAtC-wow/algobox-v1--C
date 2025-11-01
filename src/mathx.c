#include "algo.h"

static int iabs(int x) { return x < 0 ? -x : x; }

int gcd_int(int a, int b) {
    a = iabs(a); b = iabs(b);
    if (a == 0) return b;     // gcd(0,b) = |b|
    if (b == 0) return a;     // gcd(a,0) = |a|
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}
