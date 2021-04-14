#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[8];
    //char *ptr  =arr;
    printf("Please Enter  7 character !\n");
    for (int i = 0 ; i < 7 ; i++)
    {
        arr[i] = getch() ;
        printf("%c \n",arr[i]);

    }

     for (int i = 0 ; i < 7 ; i++)
    {
        printf("%c" , arr[i] );
    }

    return 0;
}
