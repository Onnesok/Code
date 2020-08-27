#include <stdio.h>

int main() {
    int i, t, k;
    int m[15] = {0, 31, 28, 31, 30, 31, 31, 30, 31, 30, 31, 30, 31};
    scanf("%d", &t);
    for (i = 1; i <= t; i++) {
        scanf("%d", &k);
        printf("%d\n", m[k]);
    }
    return 0;
}
