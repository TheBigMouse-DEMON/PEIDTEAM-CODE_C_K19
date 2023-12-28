#include <stdio.h>
#include <stdlib.h>

// Viết chương trình nhập vào 3 cạnh, tìm xem 3 cạnh đó tạo thành tam giác gì ? ( 4p )

int main()
{
    int a, b, c;
    printf("\nNhap a: ");
    scanf("%d", &a);
    printf("\nNhap b: ");
    scanf("%d", &b);
    printf("\nNhap c: ");
    scanf("%d", &c);

    if(a + b > c && b + c > a && b + a > c){
        if(a == b || a == c || b== c){
            if( a == b && a == c && b == c){
                printf("\ntam giac deu");
            }else if( a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
                printf("\ntam giac vuong can");
            }else{
                printf("\ntam giac can");
            }
        }else if( a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
                printf("\ntam giac vuong ");
            }else{
                printf("\ntam giac thuong");
            }
    }else{
        printf("\nko phai tam giac");
    }
    return 0;
}
