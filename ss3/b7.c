#include <stdio.h>

int main() {
    int so, tongChuaSo;

    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &so);

    if (so < 1000 || so > 9999) {
        printf("So nhap vao phai co 4 chu so!\n");
        return 1; 
    }

    tongChuaSo = (so / 1000) + (so / 100 % 10) + (so / 10 % 10) + (so % 10);

    printf("Tong cac chu so trong %d la: %d\n", so, tongChuaSo);

    return 0;
}

