#include <stdio.h>
#include <stdlib.h>

void toUppercaseV2(char character);
int main()
{
    char ch;
    printf("\nNhap ki tu: ");
    scanf("%c", &ch);
    toUppercaseV2(ch);
    return 0;
}
void toUppercaseV2(char character){
    //process
    if(character >= 97 && character <= 122){
        character -= 32;
    }
    //output
     printf("%c", character);
}
