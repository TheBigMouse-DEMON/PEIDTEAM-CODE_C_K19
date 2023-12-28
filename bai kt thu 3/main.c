#include <stdio.h>
#include <stdlib.h>

// Khanh
// nhap vao 1 con so nguyen xin kt so do cos phai so nguyen to hay ko va dem so nguyn to da kt thanh cong nhap so 0 thi dung lai

int main()
{
    int n;
    char a;
    int count = 0;
    do{
        printf("\nnhap n: ");
        scanf("%d", &n);
        scanf("%c", &a);
        fflush(stdin);
        if( a != 10 || n < 0){
            printf("\nNhap lai");
        }else{
            int prime = 1;
            if( n >= 2){
                for( int i = 2 ; i <= n - 1 ; i++){
                    if( n % i == 0){
                        prime = 0;
                    }
                }
                if(prime = 1){
                    printf("%d la so nguyen to");
                    count++;
                }else{
                    printf("\n%d ko phai so nguyen to");
                }
            }else{
                printf("\n%d ko phai la so nguyen to");
            }
        }
        printf("\n%d", count);
    }while(n!= 0);
    return 0;
}
