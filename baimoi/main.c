#include <stdio.h>
#include <stdlib.h>
//Khanh

//nhap 1 khoang tu start den end dem so nguyen to

int main()
{
    int count = 0;
    int n;
    char a;
    do{
        printf("\nnhap n: ");
        scanf("%d", &n);
        scanf("%c", &a);
        fflush(stdin);
        if( n < 0 || a != 10){
            printf("nhap lai");
        }else{
            int prime = 1;
            if(n >= 2){
                for(int i = 2 ; i <= n - 1 ; i++){
                    if(n%i==0){
                        prime =0;
                    }
                }
                if(prime == 1){
                    printf("%d la so nguyen to", n);
                    count++;
                    printf("\n%d", count);
                }
            }
        }
    }while(n != 0);
    return 0;
}

