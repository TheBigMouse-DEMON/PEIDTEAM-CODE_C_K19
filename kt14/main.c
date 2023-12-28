#include <stdio.h>
#include <stdlib.h>

// Nhập vào 1 khoảng Start và End, Đếm số lượng và tính tổng các số nguyên tố có trong khoảng ( 4p )
int main()
{
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
    for( int n = start ; n <= end ; n++){
        int prime = 1;
        if(n >= 2){
            for(int i = 2; i <= n - 1; i++){
                if( n % i == 0){
                    prime = 0;
                }
            }
            if(prime == 1){
                count++;
                sum += n;
            }
        }
    }
    printf("\nTong la %d", sum);
    printf("\nco %d so nt", count);
    return 0;
}
