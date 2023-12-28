#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("nNhap ki tu: ");
    scanf("%c", &ch);
    fflush(stdin);
    if(ch >= 97 && ch <= 144){
        ch -= 32;
    }
    printf("\n%c",ch);
    return 0;
}
