#include <stdio.h>

int main() {
    int a[20], n, m, i;
    a[1] = 1;
    a[2] = 1;
    scanf("%d%d", &n, &m);
    for (i = 3; i <= 50; i++) {
        a[i] = a[i - 1] + a[i - 2];
    }
    for (i = n; i <= m; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
