#include <stdio.h>

int main() {
    int num = 25;
    int a;
    while ( num == 25 ){
        printf("hay nhap mot so ");
        scanf("%d", &a);
        if(a == 25){
            printf("chuan roi\n");
            break;

        }else if (a > 40){
            printf("lon hon roi\n");
        }else{
            printf("nho hon roi\n");
        }
    }
    return 0;
}
