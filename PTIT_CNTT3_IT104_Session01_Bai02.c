#include <stdio.h>
void printDouble(int n) {
    int i =1;
    while (i < n) {
        printf("%d\n", i);
        i *= 2;
    }
}

int main() {
    int n;

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    printf("Cac gia tri i nho hon n:\n");
    printDouble(n);

    return 0;
}
