#include <stdio.h>
#include <stdlib.h>
// Nhập vào 1 khoảng Start và End, Đếm số lượng số nguyên tố, số chính phương, số chẵn, số lẽ có trong khoảng ( 8p )
int main()
{
    int start;
    int end;
    int count;
    int count1;
    int count2;
    int count3;

    printf("\nNhap start: ");
    scanf("%d", &start);
    printf("\nNhap end: ");
    scanf("%d", &end);

    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }

    for( int n = start ; n <= end; n++){
        int prime = 1;
        if(n>=2){
            for( int i = 2; i <= n - 1; i++){
                if(n%i==0){
                    prime = 0;
                }
            }
            if(prime == 1){
                count++;
            }
        }
        if(n%2==0){
            count1++;
        }else{
            count2++;
        }

        if(sqrt(n) == (int)sqrt(n)){
            count3++;
        }
    }
    printf("\nco %d so nguyen to", count);
    printf("\nco %d so chan", count1);
    printf("\nco %d so le", count2);
    printf("\nco %d so chinh phuong", count3);
    return 0;
}
