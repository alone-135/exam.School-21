#include <stdio.h>

int contains(int num, int arr2_size, int *arr2);
int input(int* arr, int *arr_size);

int main() {
    int arr[1024];
    int arr_size = 0;
    int arr2[10];
    int arr2_size = 0;

    if ((input(arr, &arr_size)) == 0) {
        for (int i = 0; i < arr_size; i++) {
            if ((contains(arr[i], arr2_size, arr2)) == 1) {
                arr2[arr2_size] = arr[i];
                arr2_size++;
            }
        }

        for (int i = 0; i < arr2_size; i++) {
            printf("%d", arr2[i]);
        }
    } else {
        printf("n/a");
    }

  return 0;
}

int input(int* arr, int *arr_size) {
    int err = 0, ch;
    while ((ch = getchar()) != '\n') {
        if ((ch < 48 || ch > 57)) {
            err = 1;
        } else {
            arr[*arr_size] = ch - 48;
            *arr_size = *arr_size + 1;
        }
    }
    return err;
}

int contains(int num, int arr2_size, int *arr2) {
    for (int i = 0; i < arr2_size; i++) {
        if (arr2[i] == num) {
            return 0;
        }
    }
    return 1;
}
