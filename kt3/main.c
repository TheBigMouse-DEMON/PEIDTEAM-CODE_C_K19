#include <stdio.h>
#include <stdlib.h>
// nhap so nguyen dich thuc in ra man hinh so ow vi tri thu n
int main()
{
    int pre = 0;
    int curr =1;
    int result = 1;
    int n ;
    char a;
    do{
        printf("\nNhap n: ");
        scanf("%d", &n);
        scanf("%c", &a);
        fflush(stdin);
        if(a != 10 || n<0){
            printf("\nNhap lai");
        }
    }while(a != 10 || n<0);

    for(int i = 1 ; i <= n - 1 ; i++){
        result = pre + curr;
        pre = curr;
        curr = result;
    }
    printf("%d la o vi tri thu %d", result , n);
    return 0;
}
