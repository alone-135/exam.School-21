#include <stdio.h>
#include <stdlib.h>
// Компилируется без флагов 
int polindrom(char *str);
size_t strleng(char *str);
void input(char *str);

int main () {
    char* stroka = malloc(sizeof(char*));
    input(stroka);
    if(polindrom(stroka) == 0) {
        printf("Yes");
    } else {
        printf("No");
    }
    free(stroka);
}

size_t strleng(char *str) {
    int dlina = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        dlina++;
    }
    return dlina;
    }
 
int polindrom(char *str) {
    int error = 0;
    char *buf = malloc(sizeof(char*));
    size_t dlina = strleng(str);
    for (int i = 0; i < dlina; i++) {
        if (str[i] > 65 && str[i] < 90)
            str[i] += 32;
    }

    for (int i = 0; i < dlina; i++)
        buf[i] = str[dlina-i-1];
    for (int i = 0; i < dlina; i++) {
        if (buf[i] != str[i]) {
        error = 1;
        }
    }
    if (dlina == 0) {
        error = 1;
    }
    free(buf);
    return error;
    }

void input(char *str) {
    int i=0;
    do {
        scanf("%c", (str + i));
        i++;
    } while (str[i-1] != '\n');
    str[i-1] = '\0';
}