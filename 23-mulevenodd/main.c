#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char a;
    do{
        printf("\nNhap n: ");
        scanf("%d", &n);
        scanf("%c", &a);
        fflush(stdin);
        if(a!=10 || n < 2){
            printf("\nnhap lai");
        }
    }while(a!=10 || n < 2);
    int p_even = 1, p_odd = 1;
    int c_even = 0, c_odd = 0;
    for(int i = 1; i <= n - 1; i++){
        if(i % 2 == 0){
            p_even *= i;
            c_even *= 1;
        }else{
            p_odd *=i;
            c_odd *= 1;
        }
    }
    p_even *= c_even;
    p_odd *= c_odd;
    printf("\np_even = %d", p_even);
    printf("\np_odd = %d", p_odd);
    return 0;
}
