#include <stdio.h>
#include <stdlib.h>
#include "Std_Macros.h"
int main()
{
    unsigned char value = 0b10001011 ;
    unsigned char bit ;
    printf("value = %d\n",value );

     ASSIGN_NIBBLE_L_VALUE(value , 0x21);
    printf("SET BIT 7 = %d\n",value );

    return 0;
}
