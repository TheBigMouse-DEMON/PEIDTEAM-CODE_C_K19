#include <stdio.h>
#include <stdlib.h>

int main()
{
   int past = 0;
   int pre = 1;
   int result = 1;

   int n;
    printf("\nNhap n: ");
    scanf("%d", &n);

    for( int i = 1 ; i <= n - 1 ; i ++){
        result = past + pre;
        past = pre;
        pre = result;
    }
    printf("\nso %d nam o vi tri thu %d",result,n);

    return 0;
}
