#include <stdio.h>
#include <stdlib.h>


    int main()
{
    //08-evenCount
    //nhap hai so nguye nlan luoc la star voi end in ra mang hinh cac so trong khoang t star den end
    int start;
    int end;
    printf("\nNhap start ");
    scanf("%d", &start);

    printf("\nNhap end ");
    scanf("%d", &end);
   if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
   }
    for(int i = start; i <= end; i++){
        printf("%5d", i);
    }
    return 0;
}
