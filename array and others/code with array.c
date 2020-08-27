#include <stdio.h>

int main() {
    int n, i;
    int a [105];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        if ((i & 1) == 0) {
            printf("%d ", a[i]);
        }
    }
    return 0;
}
