#include <stdio.h>

int main() {
    int a, x, sum_odd = 0;

    if ((scanf("%d", &a)) != 1 || a < 0) {
        printf("n/a");
    } else {
        while (a != 0) {
            x = a % 10;
            a = a / 10;

            if (x % 2 != 0) {
                sum_odd = sum_odd + x;
            }
        }
        if (sum_odd == 0) {
            printf("n/a");
        } else {
            printf("%d", sum_odd);
        }
    }

    return 0;
}
