#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char a;
    int count = 0;
    int sum = 0;
    while(1 == 1){
        do{
            printf("\n\nNhap n: ");
            scanf("%d", &n);
            scanf("%c", &a);
            fflush(stdin);
            if(a!= 10 || n < 0){
                printf("\nNhap lai");
            }
        }while(a!= 10 || n < 0);
        if(n == 0){
            break;
        }
        if(n >= 2){
           int prime = 1;
        for(int i = 2; i <= n - 1; i++){
            if(n % i == 0){
                prime = 0;
                break;
            }
        }
        if(prime == 1){
            printf("\nLa so nguyen to");
            count++;
            sum += n;
        }else{
            printf("\nKhong phai la so nguyen to");
        }
    }else{
        printf("\nKhong la so nguyen to");
    }
    printf("\n%d", count);
    printf("\n%d", sum);
}

    return 0;
}
