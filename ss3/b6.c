#include <stdio.h>

int main() {
    float canhDay, chieuCao, dienTich;

    printf("Nhap do dai canh day cua tam giac: ");
    scanf("%f", &canhDay);

    printf("Nhap chieu cao cua tam giac: ");
    scanf("%f", &chieuCao);

    dienTich = 0.5 * canhDay * chieuCao;

    printf("Dien tich tam giac: %.2f\n", dienTich);

    return 0;
}

