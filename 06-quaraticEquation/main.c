#include <stdio.h>
#include <stdlib.h>

/*
nhap vao 3 so thuc a b c tim nghiem pt bat hai
a^2 la pow(a,2)
can bat hai sqrt(a)
can bat 5 pow(a, (float)1/5)
*/
int main()
{
    float a;
    float b;
    float c;
    float x1;
    float x2;

    printf("\nNhap a = ");
    scanf("%f", &a);

    printf("\nNhap b = ");
    scanf("%f", &b);

    printf("\nNhap c = ");
    scanf("%f", &c);
    float d = pow(b,2)- 4*a*c;
    float e;
    e = d;
    e = sqrt(e);
    if( a == 0){
            x1 = -c/b;
            printf("\nNghiem la %f", x1);// lam them
    }else{
        if(d < 0){
            printf("\nPt vo nghiem");
        }else if(d == 0){
            x1 = -b/(2*a);
            printf("\nx1=x2= %.2f", x1);
        }else{
            x1 = (-b + e)/(2*a);
            x2 = (-b - e)/(2*a);
            printf("\nx1= %.f x2 = %.f", x1, x2);
        }
    }
    return 0;
}
