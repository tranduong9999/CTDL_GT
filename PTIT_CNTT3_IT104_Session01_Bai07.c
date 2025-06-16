#include <stdio.h>
#include <stdbool.h>

bool hasDuplicateBruteForce(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                return true;
            }
        }
    }
    return false;
}

bool hasDuplicateUsingFlag(int arr[], int n) {
    int flag[1001] = {0};

    for (int i = 0; i < n; i++) {
        if (flag[arr[i]] == 1) {
            return true;
        }
        flag[arr[i]] = 1;
    }
    return false;
}

int main() {
    int n;

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d (tu 0 den 1000): ", i + 1);
        scanf("%d", &arr[i]);
    }

    bool isDuplicate1 = hasDuplicateBruteForce(arr, n);
    printf("\n[Cach 1 - Brute Force] Co phan tu trung lap? %s\n", isDuplicate1 ? "CO" : "KHONG");
    printf("Do phuc tap cach 1: O(n^2)\n");

    bool isDuplicate2 = hasDuplicateUsingFlag(arr, n);
    printf("\n[Cach 2 - Dung mang danh dau] Co phan tu trung lap? %s\n", isDuplicate2 ? "CO" : "KHONG");
    printf("Do phuc tap cach 2: O(n)\n");

    return 0;
}
