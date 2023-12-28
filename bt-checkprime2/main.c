#include <stdio.h>
#include <stdlib.h>

void checkprime (int n);
int main()
{
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);
    checkprime(n);
    return 0;
}
void checkprime (int n){
    if(n >= 2){
       int prime = 1;
    for(int i = 2; i <= n - 1; i++){
        if(n % i == 0){
            prime = 0;
            break;
        }
    }
    if(prime == 1){
        printf("La so nguyen to");
    }else{
        printf("Khong phai la so nguyen to");
    }
    }else{
        printf("Khong la so nguyen to");
    }
}
