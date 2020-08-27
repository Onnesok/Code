#include <stdio.h>

int main() {
    int n, m, i, a, j;
    int r[55];
    for (j = 1; j <= 50; j++) {
        r[j] = 0;
    }
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++) {
        scanf("%d", &a);
        r[a] = 1;
    }
    for (i = 1; i <= m; i++){
        scanf("%d", &a);
        if (r[a] == 1) {
            printf("present\n");
        } else {
            printf("absent\n");
        }
    }
    return 0;
}
