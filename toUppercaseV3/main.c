#include <stdio.h>
#include <stdlib.h>


char toUppercaseV3(void);
int main()
{
    char ch = toUppercaseV3();
    printf("\n%c", ch);
    return 0;
}
char toUppercaseV3(void){
    // intput
    char character;
    printf("\nNhap ki tu: ");
    scanf("%c", &character);
    //process
    if(character >= 97 && character <= 122){
        character -= 32;
    }
    return character;
}
