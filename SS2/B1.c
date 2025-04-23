#include <stdio.h>

int main() {
    // int: kieu so nguyen, dung de luu cac so khong co phan thap phan
    int tuoi = 20;

    // float: kieu so thuc, dung de luu cac so co phan thap phan (do chinh xac vua)
    float diem_trung_binh = 7.5;

    // double: giong float nhung co do chinh xac cao hon
    double can_nang = 60.75;

    // char: kieu ky tu, dung de luu 1 ky tu don
    char ky_tu = 'A';

    // _Bool: kieu boolean, chi nhan gia tri 0 (false) hoac 1 (true)
    _Bool da_tot_nghiep = 1;

    // In ra cac bien de kiem tra
    printf("Tuoi: %d\n", tuoi);
    printf("Diem trung binh: %.2f\n", diem_trung_binh);
    printf("Can nang: %.2lf\n", can_nang);
    printf("Ky tu: %c\n", ky_tu);
    printf("Da tot nghiep: %d\n", da_tot_nghiep);

    return 0;
}

