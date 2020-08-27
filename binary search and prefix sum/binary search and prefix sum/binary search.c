#include <stdio.h>

int main() {
    int ar[50], n, i, j, sw, l, r;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (ar[i] > ar[j]) {
                sw = ar[i];
                ar[i] = ar[j];
                ar[j] = sw;
            }
        }
    }
    int count = 0, need = 12;
    l = 0, r = n - 1;
    while (l<= r) {
        int m = (l + r) / 2;
        if (ar[m] == need) {
            count++;
            break;
        }
        if (need > ar[m]) {
            l = m + 1;
        }
        if (need < ar[m]) {
            r = m - 1;
        }
    }
    if (count == 1){
        printf("found\n");
    }
    else {
        printf("not found\n");
    }
    return 0;
}
