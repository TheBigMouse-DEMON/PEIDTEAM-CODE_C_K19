#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    while( 1 == 1){
        do{
        printf("\nNhap ki tu: ");
        scanf("%c", &ch);
        fflush(stdin);
        if(ch < 'a' || ch > 'z' ){
            printf("\nNhap apha di");
        }
    }while(ch < 'a' || ch > 'z' );
    if( ch = 0 ){
        break;
    }

    printf("\n%d %c  %0", ch , ch, ch);
    }

    return 0;
}
