#include <stdio.h>

int main() {
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    float result = (a + b + c) / 3;
    printf("the average is : %f", result);
    return 0;
}
