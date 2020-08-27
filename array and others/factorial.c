#include <stdio.h>

int main() {
    long long f[25], i;
    f[1] = 1;
    for (i = 2; i <= 20; i++) {
        f[i] = f[i - 1] * i;
    }
    for (i = 1; i <= 20; i++) {
        printf("%lld\n", f[i]);
    }
    return 0;
}
