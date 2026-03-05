#include <stdio.h>

void removeLastElement(int* arr, int* length) {
    (*length)--;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);

    removeLastElement(arr, &length);

    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}