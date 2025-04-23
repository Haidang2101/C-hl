#include <stdio.h>

int main() {
    // Khai bao hang so PI kieu float
    const float PI = 3.14f;

    // Khai bao va gan gia tri cho ban kinh
    float ban_kinh = 5.0f;

    // Tinh chu vi: chu_vi = 2 * PI * ban_kinh
    float chu_vi = 2 * PI * ban_kinh;

    // Tinh dien tich: dien_tich = PI * ban_kinh * ban_kinh
    float dien_tich = PI * ban_kinh * ban_kinh;

    // In ket qua ra man hinh
    printf("Ban kinh: %.2f\n", ban_kinh);
    printf("Chu vi hinh tron: %.2f\n", chu_vi);
    printf("Dien tich hinh tron: %.2f\n", dien_tich);

    return 0;
}

