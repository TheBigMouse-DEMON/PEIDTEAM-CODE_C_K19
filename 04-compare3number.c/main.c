#include <stdio.h>
#include <stdlib.h>

   //xin người dùng 3 số nguyên duong
//lần luoc là a, b, c
// in ra màng hình có giá trị lớn nhất
/*
nhập a 12
nhập b 14
nhập c 15
=> c lớn nhất
 a lớn nhất (a > b && a > c)
 b lon nhat (b > c && b > a)
 c lon nhat ( c > b && c > a)
 a va b lon nhat(a == b && b > c)
 a va c lon nhat (a == c && c > b)
 b va c lon nhat (b == c && c > a)
 a ,b,c bang nhau (a == b && b == c)
*/
int main()
{
    int a, b,c;
    printf("\nNhap a: ");
    scanf("%d", &a);
    printf("\nNhap b: ");
    scanf("%d", &b);
    printf("\nNhap c: ");
    scanf("%d", &c);

    if( a > b && a > c){
        printf("\na lon nhat");
    }else if( b > a && b > c){
        printf("\nb lon nhat");
    }else if( c > b && c > a){
        printf("\nc lon nhat");
    }else if( a == b && a > c){
        printf("\na va b lon nhat va bang nhau");
    }else if( c == b && b > a){
        printf("\nc va b lon nhat va bang nhau");
    }else if( a == c && a > b){
        printf("\na va c lon nhat va bang nhau");
    }else{
        printf("\n a ,b ,c bang nhau");
    }
    return 0;
}


