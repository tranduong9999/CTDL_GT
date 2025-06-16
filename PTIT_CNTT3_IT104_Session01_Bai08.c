#include <stdio.h>

int main() {
    int n;

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int arr[n];
    int frequency[1001] = {0};

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d (tu 0 den 1000): ", i + 1);
        scanf("%d", &arr[i]);
        frequency[arr[i]]++;
    }

    int maxFreq = 0;
    int mostFrequentValue = -1;

    for (int i = 0; i <= 1000; i++) {
        if (frequency[i] > maxFreq) {
            maxFreq = frequency[i];
            mostFrequentValue = i;
        }
    }

    printf("\nPhan tu xuat hien nhieu nhat: %d\n", mostFrequentValue);
    printf("So lan xuat hien: %d\n", maxFreq);
    printf("Do phuc tap thuat toan: O(n)\n");

    return 0;
}
