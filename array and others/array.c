#include <stdio.h>

int main() {
    int n, m;
    int i, a[105];
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    while (m--) {
        getchar();
        char sign;
        int v;
        scanf("%c%d", &sign, &v);
        if (sign == '+') {
            for (i = 0; i < n; i++) {
                a[i] = a[i] + v;
            }
        } else if (sign == '-') {
            for (i = 0; i < n; i++) {
                a[i] = a[i] - v;
            }
        } else if (sign == '*') {
            for (i = 0; i < n; i++) {
                a[i] = a[i] * v;
            }
        } else {
            for (i = 0; i < n; i++) {
                a[i] = a[i] / v;
            }
        }
    }
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}
