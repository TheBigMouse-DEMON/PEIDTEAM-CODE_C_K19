#include <stdio.h>
#include <stdlib.h>
// nhap vao 3 canh tim xem tao thanh tam giac gi
int main()
{
    int a,b,c;
    printf("\nNhap a: ");
    scanf("%d", &a);
    printf("\nNhap b: ");
    scanf("%d", &b);
    printf("\nNhap c: ");
    scanf("%d", &c);

    if(a+b>c && a+c>b && b+c>a){
        if(a==b || a==c || b==c){
            if(a==b && a== c && c== b){
                printf("\ntam giac deu");
            }else if(a*a +b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
                printf("\ntam giac vuong can");
        }else{
            printf("\ntam giac can");
        }
    }else if(a*a +b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
                printf("\ntam giac vuong ");
        }else{
            printf("\ntam giac thuong");
        }
    }else{
        printf("\nKhong phai la tam giac");
    }
    return 0;
}
