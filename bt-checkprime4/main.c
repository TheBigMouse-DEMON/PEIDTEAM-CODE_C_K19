#include <stdio.h>
#include <stdlib.h>

int checkprime (int n);
int main()
{
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);

    int check = checkprime(n);
    check ? printf("\nso nguyen to") : printf("nko phai la so nguyen to");
    return 0;
}
int checkprime (int n){
    if(n >= 2){
        for(int i = 2; i <= n - 1; i++){
        if(n % i == 0){
            return 0;
        }
    }return 1;
    }
    return 0;
}
