#include <stdio.h>

int main() {
    int n, a = 0;
    do {
        printf("Nhap mot so nguyen duong: ");
        scanf("%d", &n);
		if (n <= 0) {
            printf("Day khong phai so nguyen duong. Vui long nhap lai!\n");
        }
    } while (n <= 0); 
    for (int i = 1; i <= n; i++) {
        a += i;
    }
    printf("Tong cac so tu 1 den %d la: %d\n", n, a);

    return 0;
}

