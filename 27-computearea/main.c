#include <stdio.h>
#include <stdlib.h>

// viet ham nhan vao 2 canh dai rong tinh dien tich cua hinh chu nhat
float computeArea(float width, float height);
int main()
{
    float w,h;
    printf("\nNhap w: ");
    scanf("%f", &w);
    printf("\nNhap h: ");
    scanf("%f", &h);

    float s = computeArea(w,h);

    printf("\nDien tich la %f", s);
    return 0;
}
float computeArea(float width, float height){
    float area = width * height;
    return area;
}

