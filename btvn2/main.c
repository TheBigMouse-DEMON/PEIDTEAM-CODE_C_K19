#include <stdio.h>
#include <stdlib.h>

int main()
 {
  int n ;
    char buffer;
    while(1==1){
    do{
        printf("\nNhap n: ");
        scanf("%d",&n);
        scanf("%c",&buffer);
        fflush(stdin);
        if(buffer != 10 || n < 1){
            printf("\nNhap lai di");
        }
    }while(buffer != 10 || n < 1);

    int sum = 0;
    float result = 0;
    for(int i = 1; i <= n ; i++){
        sum += i;
        result += (float)1/sum;
    }
    printf("\nSum = %d", sum);
  return 0;
}

