#include <stdio.h>
#include <stdlib.h>

int* mallocArray(int, n) {
    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }
    return arr;
}

int main() {
    int n;
    printf("Nhap so luong phan tu : ");
    scanf("%d", &n);

    int* arr = mallocArray(n, n);

    printf("Mang sau khi cap nhat va khoi tao: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    free(array);
    return 0;
}