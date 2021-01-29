#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    printf("Please Enter Value to get ASCII Code of It : ") ;
    unsigned char temp ,character ;

    fflush(stdin);
    temp =getch();

    if(temp == '\0' || temp == 224 )
    {
      character = getch();
    }
    else
    {
        character = temp ;
    }

    printf("\nThe ASCII Value is %d", character);
    return 0;
}
