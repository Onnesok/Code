#include <stdio.h>

int main() {
    int row = 1, col, space;
    int h;
    scanf("%d", &h);
    while (row <= h) {
        space = 1;
        while (space <= h - row) {
            printf(" ");
            space++;
        }
        col = 1;
        while (col <= 2 * row - 1) {
            printf("*");
            col++;
        }
        printf("\n");
        row++;
    }
    return 0;
}
