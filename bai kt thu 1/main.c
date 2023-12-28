#include <stdio.h>
#include <stdlib.h>

//KHANH

// viet chuong trinh nhap vao 3 canh timf xem 3 chanh do taoj tam giac gi

int main()
{
    int a,b,c;
    printf("\nnhap a: ");
    scanf("%d", &a);
    printf("\nnhap b: ");
    scanf("%d", &b);
    printf("\nnhap c: ");
    scanf("%d", &c);

    if(a+b>c && a+c>b && b+c>a){
        if(a==b || a==c ||b==c){
            if(a==b && a==c && b==c){
                printf("\ntam giac deu");
            }else if(a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b){
                printf("\nTam giac vuong can");
            }else{
                printf("\ntam giac can");
            }
        }else if(a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b){
                printf("\nTam giac vuong ");
            }else{
                printf("\ntam giac thuong");
            }
    }else{
        printf("\nkhong phai tam giac");
    }
    return 0;
}
