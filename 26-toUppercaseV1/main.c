#include <stdio.h>
#include <stdlib.h>
void toUppercaseV1(void);
int main()
{
    toUppercaseV1();//call
    return 0;
}
void toUppercaseV1(void){ // build
    // intput
    char character;
    printf("\nNhap ki tu: ");
    scanf("%c", &character);
    //process
    if(character >= 97 && character <= 122){
        character -= 32;
    }
    //output
     printf("%c", character);
}
