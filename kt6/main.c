#include <stdio.h>
#include <stdlib.h>
// Tìm giá trị của dãy số 1 + 2 – 3 – 4 + 5 + 6 – 7 – 8 +9 + 10 -….. – ( n – 2 ) – ( n – 1 ) + n + ( n + 1 ) ( 4p )
int main()
{
    int count = 0;
    int sum = 0;
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);

    for( int i = 1 ; i <= n; i++){
        count++;
        if(count > 2){
            sum -= i;
            if(count == 4){
                count = 0;
            }
        }else{
            sum += i;
        }
    }
    printf("%d", sum);

    return 0;
}
