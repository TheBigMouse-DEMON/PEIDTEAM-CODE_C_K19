#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height;
    int width;
    printf("\nNhap height: ");
    scanf("%d", &height);
    printf("\nNhap width: ");
    scanf("%d", &width);

    for(int h = 1; h <= height; h++){
        for(int w = 1; w <= width; w++){
            if(h == 1 || h == height || w == 1 || w == width){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
