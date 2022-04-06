#include <stdio.h>
#include <stdlib.h>

void crazy_mas_even(int* dataI, int size, int* dataO);
void crazy_mas_odd(int* dataI, int size, int* dataO);
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
        if (size % 2 == 0) {
            crazy_mas_even(dataI, size, dataO);
        } else {
            crazy_mas_odd(dataI, size, dataO);
        }
        output(dataO, size);
    }

    return 0;
}

void crazy_mas_even(int* dataI, int size, int* dataO) {
    int x = 0;
    for (int i = 0; i < size / 2; i++) {
        dataO[x] = dataI[i];
        dataO[x + 1] = dataI[size - 1 - i];
        x = x + 2;
    }
}

void crazy_mas_odd(int* dataI, int size, int* dataO) {
    int x = 0;
    dataO[0] = 0;
    for (int i = 0; i < size / 2 + 1; i++) {
        if (size / 2 == i) {
            dataO[x] = dataI[i];
        } else {
            dataO[x] = dataI[i];
            dataO[x + 1] = dataI[size - 1 - i];
            x = x + 2;
        }
    }
}

int input(int* dataI, int* size) {
    int err = 0;

    while (dataI[*size - 1] != -1) {
        if (scanf("%d", &dataI[*size]) != 1) {
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
