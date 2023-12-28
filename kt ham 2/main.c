#include <stdio.h>
#include <stdlib.h>
//Viết hàm nhận vào số có 2 chữ số, nếu số đó là số nguyên tố và
// tổng 2 chữ số chia hết cho 2 Có đầu ra là true hoặc false, nếu true thì in ra đúng rồi, false thì sai rồi ( 4p )
void prime ( int n );
int main()
{
    int n;
    do{
        printf("\nNhap n: ");
        scanf("%d", &n);
        if( n < 10){
            printf("\nNhap lai");
        }
    }while(n < 10);
    prime(n);
    return 0;
}
void prime ( int n ){
            int prime = 1;
            for ( int i = 2 ; i <= n - 1 ; i++){
                if(n % i == 0){
                    prime =0;
                }
            }
            if( prime == 1){

            }
}
