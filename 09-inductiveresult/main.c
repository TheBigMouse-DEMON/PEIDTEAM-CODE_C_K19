#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int result = 0;
    printf("\nNhap n: ");
    scanf("%d", &n);

    for( int i = 1 ; i <= n ; i++){
       result += pow(i, n);
    }
    printf("\nResult : %d", result);
    return 0;
}
