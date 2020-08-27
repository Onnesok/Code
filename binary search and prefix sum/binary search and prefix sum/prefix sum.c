#include <stdio.h>

int in() {
    int n;
    scanf("%d", &n);
    return n;
}
int main() {
    int n, ar[100],l, r, i;
    n = in();
    ar[0] = 0;
    for (i = 1; i <= n; i++) {
        ar[i] = in();
    }
    for (i = 1; i <= n; i++) {
        ar[i] = ar[i] + ar[i - 1];
    }
    int m;
    m = in();
    for (i = 1; i <= m; i++) {
        l = in(), r = in();
        int res = ar[r] - ar[l - 1];
        printf("%d\n", res);
    }
    return 0;
}
