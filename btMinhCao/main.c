#include <stdio.h>
#include <stdlib.h>

/* bai 1
int main()
{
    long long n;
    int count = 0;
    do{
        printf("\nNhap n: ");
        scanf("%d", &n);
        if(n < 0){
            printf("\nNhap lai");
        }
    }while(n < 0);
    long long tmp = n;
    long long  a = 0;
    while(tmp > 0){
        a = tmp % 10;
        tmp = tmp / 10;
        if(a >= 2){
            int prime = 1;
            for(int i = 2 ; i <= a - 1 ; i++){
                if(a%i == 0){
                    prime = 0;
                    break;
                }
            }
            if(prime == 1){
                count++;
            }
        }

    }
    printf("\nSL so nguyen to la %d", count);
    return 0;
}

*/
// Bài 2
/*
int main()
{
    int n;
    int count = 0;
    int sum = 0;
    do{
        printf("\nNhap n: ");
        scanf("%d", &n);
        if(n<0){
            printf("\Nnhap lai");
        }
    }while(n<0);
    for(int i = 0 ; i <= n ; i++ ){
        sum += pow(-1, i)*i;

    }
    printf("%d",sum);
    return 0;
}
*/

//bai 3
int main()
{
    int n;
    int count = 0;
    float sum = 0;
    printf("\nNhap n: ");
    scanf("%d", &n);
    for(int i = 0; i <= n + 2 ; i++){
        sum+=pow(-1,i)*(2*(float)i)/(2*(float)i + 1);
    }
    printf("\n%f", sum);
    return 0;
}


//bai 4
/*
int main()
{
    int n;
    int rev = 0;
    printf("\nNhap n: ");
    scanf("%d", &n);
    int tmp = n;
    for( ; tmp !=0 ;){
        int a = tmp % 10;
        tmp = tmp / 10;
        rev = rev * 10 + a;
    }
    printf("\%d", rev);
return 0;
}

*/



