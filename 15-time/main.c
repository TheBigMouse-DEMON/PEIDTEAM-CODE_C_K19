#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s;
    char buffer;
    do{
        printf("\nNhap giay: ");
        scanf("%d",&s);
        scanf("%c",&buffer);
        fflush(stdin);
        if(buffer != 10 || s < 0){
            printf("\Nhap lai di");
        }
    }while(buffer != 10 || s < 0);

    int h = 0;
    int m = 0;
    h = s/3600;
    s = s % 3600;
    m = s/60;
    s = s % 60;
    printf("\n%02d:%02d:%02d", h ,m ,s);
    return 0;
}
