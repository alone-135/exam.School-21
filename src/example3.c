#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void smena(char *word, int n);
void proverka(char *word, int n, int * check);

int main() {
    char word[100];
    scanf("%s", word);
    int n = strlen(word);
    int check = 1;

    smena(word, n);
    proverka(word, n, &check);

    if(check == 1) {
        printf("yes");
    } else {
        printf("No");

    }

}
void smena(char *word, int n) {
    for(int i = 0; i < n; i++) {
        if (word[i] >64 && word[i] < 91) {
            word[i] +=32;
        }
    }
}

void proverka(char *word, int n, int * check) {
    for(int i = 0; i < n; i++) 
        if (word[i] != word [n-i-1]) {
            *check = 0;
        }

}