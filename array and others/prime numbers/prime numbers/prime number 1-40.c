#include <stdio.h>
#include <math.h>

int main() {
    int n, t, i;
    printf("2\n");
    for (t = 3; t <= 40; t += 2) {
        int count = 0;
        int q = sqrt(t);
        for (i = 2; i <= q; i++) {
            if (t % i == 0) {
                count++;
            }
        }
        if (count == 0) {
            printf("%d\n", t);
        }
    }
    return 0;
}
