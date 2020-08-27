#include <stdio.h>

int main() {
    int n = 1, m = 1, i, k;
    printf("%d %d ", n, m);
    for (i = 1; i <= 6; i++) {
        k = n + m;
        printf("%d ", k);
        n = m;
        m = k;
    }
    return 0;
}
