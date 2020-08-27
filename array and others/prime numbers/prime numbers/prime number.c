#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int cnt = 0;
    for (i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            cnt++;
        }
    }
    if (cnt > 0) {
        printf("Not Prime\n");
    } else {
        printf("Prime\n");
    }
    return 0;
}
