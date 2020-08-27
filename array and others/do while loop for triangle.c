#include <stdio.h>

int main() {
    int row, col, spc, a;
    scanf("%d", &a);
    col = 1;
    do {
        printf("*\n");
        col++;
        spc = 1;
        do {
            printf(" ");
            spc++;
        } while (spc <= a);
    } while (col <= a - col);
    return 0;
}
