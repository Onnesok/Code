#include <stdio.h>

int main() {
    int i, j;
    int r, c;
    scanf("%d%d", &r, &c);

    for (i = 1; i <= r; i++) {
        for (j = 1; j <= c; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
