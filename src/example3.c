#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void change(char *word, int n);
void check(const char *word, int n, int * check);

int main() {
    char word[1024+1];
    scanf("%1024s", word);
    
    int n = strlen(word);
    int ch = 1;

    change(word, n);
    check(word, n, &ch);

 

    return 0;
}

void change(char* word, int n) {
    for (int i = 0; i < n; i++) {
        if (word[i] > 64 && word[i] < 91) {


            word[i] += 32;
        }
    }
}

voi
