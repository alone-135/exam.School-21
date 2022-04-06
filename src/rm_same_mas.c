#include <stdio.h>

int contains(int num, int arr2_size, int *arr2);
int input(int* arr, int *arr_size);

int main() {
    int arr[1024];
    int arr_size = 0;
    int arr2[1024];
    int arr2_size = 0;

    if ((input(arr, &arr_size)) == 0) {
        for (int i = 0; i < arr_size; i++) {
            if ((contains(arr[i], arr2_size, arr2)) == 1) {
                arr2[arr2_size] = arr[i];
                arr2_size++;
            }
        }

        for (int i = 0; i < arr2_size - 1; i++) {
            printf("%d ", arr2[i]);
        }
        printf("%d", arr2[arr2_size - 1]);
    } else {
        printf("n/a");
    }

  return 0;
}

int input(int* arr, int *arr_size) {
    int err = 0;
    while (arr[*arr_size - 1] != -1) {
        if ((scanf("%d", &arr[*arr_size])) != 1) {
            err = 1;
            break;
        } else {
            *arr_size = *arr_size + 1;
        }
    }
    *arr_size = *arr_size - 1;

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
