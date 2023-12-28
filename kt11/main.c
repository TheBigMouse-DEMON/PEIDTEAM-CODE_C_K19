#include <stdio.h>
#include <stdlib.h>

// Viết chương trình nhận vào 1 số nguyên, tính tổng, tích các thành phần và in ra số đó dưới dạng đảo ngược ( 4p )

int main()
{
    int n;
    char a;
    do{
        printf("\nNhap n: ");
        scanf("%d", &n);
        scanf("%c", &a);
        fflush(stdin);
        if(a!= 10 && n < 0){
            printf("\nNhap lai");
        }
    }while(a!= 10 && n < 0);
    int sum = 0;
    int z;
    int mulp = 1;
    for(; n != 0; ){
        z = n%10;
        sum += n % 10;
        mulp *= n%10;
        n = n/10;
        printf("\%d", z);
    }
    printf("\ntong la %d", sum);
    printf("\nTich : %d", mulp);
    return 0;
}
