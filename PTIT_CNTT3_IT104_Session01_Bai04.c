#include <stdio.h>

int sumLoop(int n) {
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int sumFormula(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int n;

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    // cach 1

    int total1 = sumLoop(n);
    int total2 = sumFormula(n);

    printf("Tong theo vong lap: %d\n", total1);
    printf("Tong theo cong thuc: %d\n", total2);

    printf("Do phuc tap thoi gian cach 1: 0(n)\n");
    printf("Do phuc tap thoi gian cach 2: 0(n)\n");

    return 0;
}