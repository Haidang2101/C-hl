#include <stdio.h>

int main() {
    // Khai bao va khoi tao hai bien so nguyen
    int so1 = 10;
    int so2 = 5;

    // Tinh tong, hieu, tich, thuong va luu vao cac bien rieng
    int tong = so1 + so2;       // Tong cua hai so
    int hieu = so1 - so2;       // Hieu cua hai so
    int tich = so1 * so2;       // Tich cua hai so
    int thuong = so1 / so2;     // Thuong cua hai so (lay phan nguyen)

    // In ket qua ra man hinh
    printf("Tong: %d\n", tong);
    printf("Hieu: %d\n", hieu);
    printf("Tich: %d\n", tich);
    printf("Thuong: %d\n", thuong);

    return 0;
}

