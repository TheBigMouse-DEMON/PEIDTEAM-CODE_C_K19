#include <stdio.h>
#include <stdlib.h>
//Viết hàm Nhập vào 1 số nguyên n . Có đầu ra số ở vị trí thứ n trong dãy Fibonanci ( 4p )
void Fibonanci ( int n);
int main()
{
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);
    Fibonanci(n);
    return 0;
}
void Fibonanci ( int n){
    int pre = 0;
    int curr = 1;
    int result = 1;
    for(int i = 1; i <= n - 1; i++){
        result = pre + curr;
        pre = curr;
        curr = result;
    }
    printf("\n%d o vi tri thu %d", result , n);
}
