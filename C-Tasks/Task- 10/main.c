#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{

    int numOfChar = 40;
    unsigned char str[numOfChar] ;
    printf("Please Enter String : ") ;

    for (int i = 0; i < (numOfChar-1) ; i++) {

        str[i] = getch();
        printf("*");
        if(str[i]== 13)
        {
            str[i] = '\0' ;
            break;
        }
    }
    str[(numOfChar-1)] = '\0' ;  // To make Last Element null
    printf("\n%s" , str ) ;
    return 0;


}
