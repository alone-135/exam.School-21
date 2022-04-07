#include <stdio.h>
#include <stdlib.h>

// при вводе не ПОЛИНДРОМА, выводит "Yes"
int main() {
    /*char A = 'c';
    char B = 'C';
    int c = A - B;
    printf("%d", c);*/
    char c;
    char *str = 0;
    int i = 0;
    while (1) {
        scanf("%c", &c);
        if (c != '\n') {
            str = (char *)realloc(str, i + 1);
            str[i] = c;
            i++;
        } else {
            str = (char *)realloc(str, i + 1);
            str[i + 1] = '\0';
            break;
        }
    }
    int proverka = 1;
    for (int j = 0; j < i; j ++) {
        if (str[j] == str[i - 1 - j] || str[j] - str[i - 1 - j] == -32 || str[j] - str[i - 1 - j] == 32) {
            printf("Yes");
            break;
        } else {
            proverka = 0;
            printf("No");
            break;
        }
    }
    return 0;
}