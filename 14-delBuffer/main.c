#include <stdio.h>
#include <stdlib.h>

int main()
{
   int age;
   char ch;
   printf("nNhap age: ");
   scanf("%d", &age);
   fflush(stdin);
   printf("\Nhap ch: ");
   scanf("%c", &ch);
   printf("\nage ne %d", age);
   printf("\nage ne %c", ch);
    return 0;
}
