#include <stdio.h>
#include <stdlib.h>
/* Nhập vào 1 số nguyên xịn, Kiểm tra số đó
có phải là số nguyên tố hay không, và in ra tổng và số lượng các số nguyên tố đã đếm được. NHập số 0 thì dừng chương trình (  6p )*/
int main()
{
    int sum = 0;
    int count = 0;
    int n;
    char a;
    do{
        printf("\nNhap a: ");
        scanf("%d", &n);
        scanf("%c", &a);
        fflush(stdin);
        if(a!=10 || n < 0){
            printf("\nNhap lai");
        }else{
        int prime =1;
        if(n>=2){
             for( int i = 2; i <= n-1 ; i++){
                if(n%i == 0){
                    prime = 0;
                }
             }
             if(prime == 1){
                printf("\n%d la nguyen to", n);
                count++;
                sum += n;
             }
    }
        }
        printf("\nTong la %d", sum);
        printf("\nco %d so nguyen to", count);

    }while(n != 0);
    return 0;
}
