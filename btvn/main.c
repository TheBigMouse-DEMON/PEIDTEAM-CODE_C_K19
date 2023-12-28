#include <stdio.h>
#include <stdlib.h>

int main()
{
    int isprime = 1;
    int n ;
    char buffer;
    while(1==1){
    do{
        printf("\nNhap n: ");
        scanf("%d",&n);
        scanf("%c",&buffer);
        fflush(stdin);
        if(buffer != 10 || n < 0){
            printf("\nNhap lai di");
        }
    }while(buffer != 10 || n < 0);
    if(n == 0){
         break;
    }
        if(n >= 2){
           for( int i = 2; i <= n-1 ; i++){
            if(n % i == 0){
                isprime = 0;
                break;
        }
            }
            if( isprime == 1){
               printf("\nla so nguyen to");
            }else{
                printf("\nKhong la so nguyen to");
            }

            }else{
            printf("\nKhong phai so nguyen to");
        }
    }
    return 0;
}
