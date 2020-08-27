#include <stdio.h>

int main() {
    int a = 5, b = 6;
    int sum = a;
    a = b;
    b = sum;
    printf("%d\n%d\n", a, b);
    return 0;
}
