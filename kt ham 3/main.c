#include <stdio.h>
#include <stdlib.h>
//Viết Hàm hông có đầu vào đầu vô,Nhập vào 1 khoảng Start và End, Đếm số lượng và tính tổng các số nguyên tố có trong khoảng ( 4p )
void prime (void);
int main()
{
    prime();
    return 0;
}
void prime (void){
    int start , end;
    int count = 0;
    int sum = 0;
    printf("\nNhap start: ");
    scanf("%d", &start);
    printf("\nNhap end: ");
    scanf("%d", &end);

    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }

    for(int n = start ; n <= end ; n++){
        if(n >= 2){
            int prime = 1;
            for ( int i = 2 ; i <= n - 1 ; i++){
                if(n % i == 0){
                    prime =0;
                }
            }
            if( prime == 1){
                sum += n;
                count ++;
            }
        }
    }
     printf("\ntong la %d", sum);
    printf("\nco %d soNT", count);
}
