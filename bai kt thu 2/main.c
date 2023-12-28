#include <stdio.h>
#include <stdlib.h>

// KHANH

// NHAP 1 CON SO NGUYEN dich thuc IN RA SO O VI TRI THU N

int main()
{
    int pre = 0;
    int curr = 1;
    int result = 1;
    int n;
    char a;
    fflush(stdin);
    do{
        printf("\nNhap n: ");
        scanf("%d", &n);
        scanf("%c", &a);
        if( a != 10 || a < 0){
            printf("\nNhap lai");
        }
    }while( a != 10 || a < 0);

    for(int i = 1; i <= n - 1 ; i++){
        result = pre + curr;
        pre = curr;
        curr = result;
    }
    printf("%d la o vi tri thu %d", result , n);
    return 0;
}
