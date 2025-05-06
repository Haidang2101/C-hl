#include <stdio.h>

int main() {
    char ten[100];  

    printf("Nhap ten cua ban: ");
    fgets(ten, sizeof(ten), stdin); 

    size_t i = 0;
    while (ten[i] != '\0') {
        if (ten[i] == '\n') {
            ten[i] = '\0';
            break;
        }
        i++;
    }

    printf("Xin chao %s!\n", ten);
    return 0;
}

