#include <stdio.h>

int main() {
    int a, x, max = 9;

    if ((scanf("%d", &a)) != 1 || a < 0) {
        printf("n/a");
    } else {
        while (a != 0) {
            x = a % 10;
            a = a / 10;

            if (x < max) {
                max = x;
            }
        }
        printf("%d", max);
    }
    return 0;
}
