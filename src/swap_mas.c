#include <stdio.h>
#include <stdlib.h>

void output(int* dataO, int sizeO);
int input(int* data, int* size);
void swap(int* data, int size);

int main() {
    int data[1024];
    int size = 0;
    int ch;

    ch = input(data, &size);
    if (ch == 1) {
        printf("n/a");
    } else if (ch == 2) {
        exit(0);
    } else {
        swap(data, size);
        output(data, size);
    }

    return 0;
}

void swap(int* data, int size) {
    int max = 0, min = 9, max_i = 0, min_i = 0;
    for (int i = 0; i < size; i++) {
        if (data[i] > max) {
            max = data[i];
            max_i = i;
        }
        if (data[i] < min) {
            min = data[i];
            min_i = i;
        }
    }
    data[max_i] = min;
    data[min_i] = max;
}

int input(int* data, int* size) {
    int err = 0;

    while (data[*size - 1] != -1) {
        if (scanf("%d", &data[*size]) != 1 || data[*size] < -1) {
            err = 1;
            break;
        } else {
            *size = *size + 1;
        }
        if (data[0] == -1) {
            err = 2;
            break;
        }
    }
    *size = *size - 1;

    return err;
}

void output(int* data, int size) {
    for (int i = 0; i < size - 1; i++) {
        printf("%d ", data[i]);
    }
    printf("%d", data[size - 1]);
}
