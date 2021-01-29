#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "User_input_name.h"


int main()
{

    int numOfChar = 40;
    unsigned char firstName[numOfChar] ,lastName[numOfChar] ;
    printf("Please Enter First Name :");
    user_Input(firstName , numOfChar);
    printf("\nPlease Enter Last Name :");
    user_Input(lastName , numOfChar);
    printf("\nFirst Name is %s\n" , firstName) ;
    printf("Last Name is %s\n" , lastName) ;

    return 0;
}
