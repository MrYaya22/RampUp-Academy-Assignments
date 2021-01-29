#include <stdio.h>
#include <stdlib.h>

int main()
{
    int integer= 0 ;
    int value = 0 ;
    printf("Enter an integer value  This loop will not stop until it reach more than 100\n");
    scanf( "%d" , &value );

    while (value < 100)
    {
        fflush(stdin);
        printf("Enter an integer value to add\n");
        scanf( "%d" , &integer );
        value = value + integer;

    }
    printf("The Summation is %d", value);
    return 0;
}
