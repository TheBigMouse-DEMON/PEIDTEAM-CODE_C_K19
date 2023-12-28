#include <stdio.h>
#include <stdlib.h>

char toUppercaseV4(char character);
int main()
{   // intput
    char ch;
    printf("\nnhap ki tu: ");
    scanf("%c", &ch);

    ch = toUppercaseV4(ch);

    printf("\ket qua la %c", ch);
    return 0;
}
char toUppercaseV4 (char character){
    //process
    if(character >= 97 && character <= 122){
        character -= 32;
    }
    return character;
}
