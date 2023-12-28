#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , b;
    int tich = 1;
    do{

        printf("\nNhap a: ");
        scanf("%d", &a);
        printf("\nNhap b: ");
        scanf("%d", &b);

        tich = a*b;

        if(sqrt(tich) == (int)sqrt(tich)){
            printf("%d la so chinh phuong", tich);
        }else{
            printf("Nhap lai");
        }

    }while(sqrt(tich) != (int)sqrt(tich));
    return 0;
}
