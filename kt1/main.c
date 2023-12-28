#include <stdio.h>
#include <stdlib.h>

// tinh giai thua n

int main()
{
    int n;
    char a;
    int tich = 1;
    do{
        printf("\nNhap n: ");
        scanf("%d", &n);
        scanf("%c", &a);
        fflush(stdin);
        if(a != 10 , n < 0){
            printf("\nNhap lai");
        }
    }while(a != 10 , n < 0);

    for(int i = 1; i <= n  ; i++){
        tich *= i;
    }
    printf("%d", tich);
    return 0;
}
