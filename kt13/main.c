#include <stdio.h>
#include <stdlib.h>

// Viết 1 chương trình nhận vào số có 2 chữ số,
// nếu số đó là số nguyên tố và tổng 2 chữ số chia hết cho 2 thì kết thúc, còn không thì nhập lại đến chết ( 4p )
int main()
{
    int n;
    char a;
    do{
        printf("\nNhap n: ");
        scanf("%d", &n);
        scanf("%c", &a);
        fflush(stdin);
        if(a!= 10 && n < 0 && n >= 10 && n < 100){
            printf("\nNhap lai");
        }else{
                int prime = 1;
                for(int i = 2 ; i <= n - 1 ; i++){
                    if( n % i == 0){
                            prime == 0;
                            break;
                }
            }
            if(prime == 1){
                int tmp = n;
                int sum = 0;
                while( tmp > 0 ){
                    int a = tmp % 10;
                    tmp = tmp / 10;
                    sum += a;
                }
                if(sum % 2 == 0)return;
            }
        }
    }while(1);


    return 0;
}
