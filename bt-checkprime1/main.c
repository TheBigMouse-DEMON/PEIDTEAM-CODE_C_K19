#include <stdio.h>
#include <stdlib.h>

void checkprime (void);
int main()
{
    checkprime();
    return 0;
}
void checkprime (void){
    int n;
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
    }else{
        printf("\nKhong phai la so nguyen to");
    }
}else{
    printf("\nKhong la so nguyen to");
}
}
