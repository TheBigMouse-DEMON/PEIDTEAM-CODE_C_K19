#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("\nnhap n: ");
    scanf("%d", &n);
    int nhan = 1;
    for( int i = 1 ; i <= n ; i++){
        nhan *= i;
    }
    printf("\nTich la: %d", nhan);
    return 0;
}
