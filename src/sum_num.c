#include <stdio.h>

int main() {
    int a, x, sum = 0;

    if ((scanf("%d", &a)) != 1) {
        printf("n/a");
    } else {
        while (a != 0) {
            x = a % 10;
            a = a / 10;
            sum = sum + x;
        }
       printf("%d", sum);
    }

    return 0;
}
