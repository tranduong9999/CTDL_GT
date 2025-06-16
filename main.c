// B1: Nhap mang
//      Buoc 1.1: Nhap so luong phan tu cua mang
//      Buoc 1.2: Nhap gia tri vao tung vi tri
//      => Da co 1 mang moi
//
//  B2: Nhap phan tu can kiem tra
//      Kieu so nguyen (int) => Dung toan tu & , template %d
//
//  B3: Duyet mang va xu ly logic
//     for -> Do da biet truoc so lan lap
//     Tao bien dem so lan lap cua phan tu (count)
//     Cu moi lan trung, thi tang count len 1 don vi
//
//  B4: Tra ve ket qua

#include <stdio.h>

/**
 * @description  Ham dem so lan xuat hien cua 1 phan tu
 * @param array Mang can lap qua
 * @param arrayLength Do dai cua mang
 * @param elementCheck Phan tu can kiem tra
 * @return So lan xuat hien cua phan tu: 0 - Neu khong xuat hien, n lan neu xuat hien
 */
int countExit(int array[], int arrayLength, int elementCheck) {
    int count = 0;
    for (int i = 0; i < arrayLength; i++) {
        if (array[i] == elementCheck) {
            count++;
        }
    }
    return count;
}

int main() {
// Khai bao cac bien can thiet
    int elements; // so luong phan tu cua mang
    int elementCheck;

    // Hien yeu cau nhap
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &elements);

    // Khai bao mang
    int array[elements];

    // Nhap mang

    for (int i = 0; i < elements; ++i) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // In mang
    for (int i = 0; i < elements; ++i) {
        printf("%d", array[i]);
    }
    printf("Nhap phan tu can kiem tra: ");
    scanf("%d", &elementCheck);

    // Goi ham de dem so lan xuat hien
    int result = countExit(array, elements, elements);

    printf("So lan xuat hien cua phan tu %d la: %d", result, elementCheck);

    return 0;
}

// Do phuc tap cua thuat toan: time: