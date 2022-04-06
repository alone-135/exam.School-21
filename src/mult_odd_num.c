#include <stdio.h>

int main() {
    int a, x, sum_odd = 0, mult_odd = 1;

    if ((scanf("%d", &a)) != 1 || a < 0) {
        printf("n/a");
    } else {
        while (a != 0) {
            x = a % 10;
            a = a / 10;

            if (x % 2 != 0 && x != 0) {
                sum_odd = sum_odd + x;
                mult_odd = mult_odd * x;
            }
        }
        if (sum_odd == 0) {
            printf("n/a");
        } else {
            printf("%d", mult_odd);
        }
    }

    return 0;
}
