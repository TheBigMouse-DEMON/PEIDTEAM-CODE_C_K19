#include <stdio.h>
#include <stdlib.h>

//Nhập vào start và end, tìm các số nguyên tố trong khoảng từ start đến end sao cho đảo ngược của số đó cũng là số nguyên tố ( 6p )
int main()
{
    int start , end;
    int count = 0;
    int sum = 0;
    printf("\nNhap start: ");
    scanf("%d", &start);
    printf("\nNhap end: ");
    scanf("%d", &end);

    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    for( int n = start ; n <= end ; n++){
        int prime = 1;
        if(n >= 2){
            for(int i = 2; i <= n - 1; i++){
                if( n % i == 0){
                    prime = 0;
                    break;
                }
            }
            if(prime == 1){
                int tpp = n;
                int rev = 0;
                while( tpp = 0 ){
                    int a = tpp % 10;
                    tpp = tpp / 10;
                    rev = rev * 10 + a;
                }
            if(rev > 2){
                for(int i = 2; i <= rev - 1; i++){
                    if( rev % i == 0){
                        prime = 0;
                }
            }
            if(prime){
                printf("\n%d", n);
            }
            }
            }
        }
    }
    return 0;
}
