#include <stdio.h>

int countOccurrences(int arr[], int n, int elementCheck) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == elementCheck) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int elementCheck;
    printf("Nhap phan tu can dem so lan xuat hien: ");
    scanf("%d", &elementCheck);

    int result = countOccurrences(arr, n, elementCheck);

    printf("Phan tu %d xuat hien %d lan trong mang \n", elementCheck, result);
    printf("Do phuc tap thuat toan: 0(n)\n");
    return 0;
}