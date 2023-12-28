#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char a;
    int sum = 0;
    do{
        printf("\nNhap n: ");
        scanf("%d", &n);
        scanf("%c", &a);
        if(a!=10 || n<0){
            printf("\nNhap lai");
        }
    }while(a!=10 || n<0);

    for(; n != 0;){
        sum += n % 10;
        n = n/ 10;
    }
    printf("\n%d", sum);
    return 0;
}
