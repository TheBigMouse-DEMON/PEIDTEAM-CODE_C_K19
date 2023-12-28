#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char a;
    int count = 0;
    while( 1==1){
        do{
        printf("\nNhap n: ");
        scanf("%d", &n);
        scanf("%c", &a);
        fflush(stdin);
        if( a != 10 || n < 0){
            printf("\nNhap lai");
        }
    }while( a != 10 || n < 0);
    if( n == 0){
        printf("\nLa so chinh phuong");
        break;
    }

    if(sqrt(n) == (int)sqrt(n)){
        printf("\nla so chinh phuong");
        count++;
    }else{
        printf("\nKo phai la so chinh phuong");
    }
    printf("\n%d", count);
    }

    return 0;

}
