#include <stdio.h>

int main() {
    float a, b, c;
    printf(" canh thu nhat: ");
    scanf("%f", &a);
    printf("canh thu hai: ");
    scanf("%f", &b);
    printf("canh thu ba: ");
    scanf("%f", &c);
    if (a > 0 && b > 0 && c > 0 && (a + b > c) && (a + c > b) && (b + c > a)) {
        printf("La 3 canh cua mot tam giac.\n");
    } else {
        printf("khong phai 3 canh cua mot tam giac.\n");
    }

    return 0;
}
