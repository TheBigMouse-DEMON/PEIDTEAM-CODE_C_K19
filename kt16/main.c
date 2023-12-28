#include <stdio.h>
#include <stdlib.h>

//Nhập vào 1 số nguyên n . In ra màn hình số ở vị trí thứ n trong dãy Fibonanci ( 4p

int main()
{
    int n;
    char a;
    int pre = 0;
    int curr = 1;
    int result = 1;
    do{
        printf("\nNhap n: ");
        scanf("%d", &n);
        scanf("%c", &a);
        fflush(stdin);
        if(a!= 10 && n < 0){
            printf("\nNhap lai");
        }
    }while(a!= 10 && n < 0);

    for( int i = 1; i <= n - 1 ; i++){
        result = pre + curr;
        pre = curr;
        curr = result;
    }
    printf("\n%d la o vi tri thu %d", result , n);
    return 0;
}
