#include <stdio.h>

int main() {
    // Khai bao va gan gia tri cho chieu dai va chieu rong
    int chieu_dai = 8;
    int chieu_rong = 5;

    // Tinh chu vi: chu_vi = (chieu_dai + chieu_rong) * 2
    int chu_vi = (chieu_dai + chieu_rong) * 2;

    // Tinh dien tich: dien_tich = chieu_dai * chieu_rong
    int dien_tich = chieu_dai * chieu_rong;

    // In ket qua ra man hinh
    printf("Chieu dai: %d\n", chieu_dai);
    printf("Chieu rong: %d\n", chieu_rong);
    printf("Chu vi hinh chu nhat: %d\n", chu_vi);
    printf("Dien tich hinh chu nhat: %d\n", dien_tich);

    return 0;
}

