#include <stdio.h>

int main() {
    int a, x, sum_even = 0, mult_even = 1;

    if ((scanf("%d", &a)) != 1) {
        printf("n/a");
    } else {
        while (a != 0) {
            x = a % 10;
            a = a / 10;

            if (x % 2 == 0 && x != 0) {
                sum_even = sum_even + x;
                mult_even = mult_even * x;
            }
        }
        if (sum_even == 0) {
            printf("n/a");
        } else {
            printf("%d", mult_even);
        }
    }

    return 0;
}
