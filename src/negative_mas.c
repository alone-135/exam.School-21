#include <stdio.h>
#include <stdlib.h>

void negative(int* dataI, int size, int* dataO);
void output(int* dataO, int sizeO);
int input(int* dataI, int* size);

int main() {
    int dataI[1024];
    int dataO[1024];
    int size = 0;
    int ch;

    ch = input(dataI, &size);
    if (ch == 1) {
        printf("n/a");
    } else if (ch == 2) {
        exit(0);
    } else {
        negative(dataI, size, dataO);
        output(dataO, size);
    }

    return 0;
}

void negative(int* dataI, int size, int* dataO) {
    int temp = size - 1;
    for (int i = 0; i < size; i++) {
        dataO[i] = dataI[temp];
        temp--;
    }
}

int input(int* dataI, int* size) {
    int err = 0;

    while (dataI[*size - 1] != -1) {
        if (scanf("%d", &dataI[*size]) != 1 || dataI[*size] < -1) {
            err = 1;
            break;
        } else {
            *size = *size + 1;
        }
        if (dataI[0] == -1) {
            err = 2;
            break;
        }
    }
    *size = *size - 1;

    return err;
}

void output(int* dataO, int size) {
    for (int i = 0; i < size - 1; i++) {
        printf("%d ", dataO[i]);
    }
    printf("%d", dataO[size - 1]);
}
