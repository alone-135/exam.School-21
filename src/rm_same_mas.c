#include <stdio.h>
#include <stdlib.h>

void rm_same(int* dataI, int* dataO, int sizeI, int* sizeO);
int rm_same_check(int num, int* dataO, int sizeO);
void output(int* dataO, int sizeO);
int input(int* dataI, int* sizeI);

int main() {
    int dataI[1024];
    int dataO[1024];
    int sizeI = 0;
    int sizeO = 0;
    int ch;

    ch = input(dataI, &sizeI);
    if (ch == 1) {
        printf("n/a");
    } else if (ch == 2) {
        exit(0);
    } else {
        rm_same(dataI, dataO, sizeI, &sizeO);
        output(dataO, sizeO);
    }

    return 0;
}

void rm_same(int* dataI, int* dataO, int sizeI, int* sizeO) {
    for (int i = 0; i < sizeI; i++) {
        if (rm_same_check(dataI[i], dataO, *sizeO) == 1) {
            dataO[*sizeO] = dataI[i];
            *sizeO = *sizeO + 1;
        }
    }
}

int rm_same_check(int num, int* dataO, int sizeO) {
    for (int i = 0; i < sizeO; i++) {
        if (dataO[i] == num) {
            return 0;
        }
    }
    return 1;
}

void output(int* dataO, int sizeO) {
    for (int i = 0; i < sizeO - 1; i++) {
        printf("%d ", dataO[i]);
    }
    printf("%d", dataO[sizeO - 1]);
}

int input(int* dataI, int* sizeI) {
    int err = 0;

    while (dataI[*sizeI - 1] != -1) {
        if (scanf("%d", &dataI[*sizeI]) != 1) {
            err = 1;
            break;
        } else {
            *sizeI = *sizeI + 1;
        }
        if (dataI[0] == -1) {
            err = 2;
            break;
        }
    }
    *sizeI = *sizeI - 1;

    return err;
}
