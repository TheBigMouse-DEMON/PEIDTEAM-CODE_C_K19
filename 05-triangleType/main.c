#include <stdio.h>
#include <stdlib.h>

int main()
{
    xin người dùng ba số nguên abc để almf đại điện cho ba cạnh, nếu có thì nó là tam giác gì
*/
#include <stdio.h>
int main()
{
    /*int a;
    int b;
    int c;
    printf("\nNhap a = ");
    scanf("%d", &a);

    printf("\nNhap b = ");
    scanf("%d", &b);

    printf("\nNhap c = ");
    scanf("%d", &c);

    if(a + b > c && b + c > a && c + a > b){
        if(a == b || b == c || c == a){
            if(a == b && b == c){
                printf("\n%d, %d va %d tao thanh tam giac deu", a, b, c);
            }else if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
                printf("\n%d, %d va %d tao thanh tam giac vuong can", a, b, c);
            }else{
                printf("\n%d, %d va %d tao thanh tam giac can", a, b , c);
            }
        }else if(a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b){
            printf("\n%d, %d va %d tao thanh tam giac vuong", a, b, c);
        }else{
            printf("%d, %d va %d tao thanh tam giac thuong", a, b, c);
        }
    }else{
        printf("\nVoi ba so %d, %d va %d khono the tao thanh mot tam giac", a, b, c);
    }
    */
   int a;
   int b;
   int c;
   printf("\nNhap a = ");
   scanf("%d", &a);

   printf("\nNhap b = ");
   scanf("%d", &b);

   printf("\nNhap c = ");
   scanf("%d", &c);
   if(a + b > c && b + c > a && c + a > b){
        if(a == b || b == c || c == a){
            if(a == b && b == c){
                printf("\nLA ta mgiac deu");
            }else if(a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b){
                printf("\nLa tam giac vuongo can");
            }else{
                printf("\nTam giac can");
            }
        }else if(a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b){
            printf("\nLa tam giac vuong");
        }else{
            printf("\nLa tam giac thuong");
        }
    }else{
        printf("\nKhong la tam giac");
    }
    return 0;
}
    return 0;
}
