#include <stdio.h>
#include <stdlib.h>
// Khanh

// nhap khoang start toi end tinh tong so chan so le co trong khoang

int main()
{
    int start,end;
    int sum = 0;
    int sum1 = 0;
    printf("\nNhap start: ");
    scanf("%d", &start);
    printf("\nNhap end: ");
    scanf("%d", &end);

    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }

    for( int i = start ; i <= end; i++){
        if(i%2==0){
            sum += i;
        }else{
            sum1 += i;
        }
    }printf("\nTong %d so le", sum);
    printf("\nTong %d so chan", sum1);
    return 0;
}
