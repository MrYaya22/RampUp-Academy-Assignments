#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
unsigned char get_command(void)
{
    unsigned char temp ;
    unsigned char character[2];
    fflush(stdin);
    temp =getch();

    if(temp == '\0' || temp == 224 )
    {
      character[1] = getch();
    }
    else
    {
        character[1] = temp ;
    }
    character[2] = '\0' ;

return character[0];
}

