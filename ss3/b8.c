#include <stdio.h>

int main() {
    int so, nghichDao = 0;

    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &so);

    if (so < 1000 || so > 9999) {
        printf("So nhap vao phai co 4 chu so!\n");
        return 1;  
    }

    while (so != 0) {
        nghichDao = nghichDao * 10 + so % 10;
        so /= 10;
    }

    printf("So nghich dao cua so da nhap la: %d\n", nghichDao);

    return 0;
}

