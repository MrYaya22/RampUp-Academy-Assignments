#include <stdio.h>
#include <stdlib.h>
#include "Get_Command.h"
int main()
{
    unsigned char data ;
    unsigned char temp ;
    unsigned char character;
    signed char state = 0 ;
    printf("New_\n\n");
    printf("Display\n\n");
    printf("Exit\n\n");
    state = -1 ;
    while(1)
    {

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

        /* Check Condition */

        switch(character)
        {
        case(72): //up
        {
            system("cls");
            if(state < 0)
            {
                printf("New_\n\n");
                printf("Display\n\n");
                printf("Exit\n\n");
                state = -1 ;

            }
            if (state == 0)
            {
                printf("New_\n\n");
                printf("Display\n\n");
                printf("Exit\n\n");
                state = -1 ;
            }
            if( state == 1)
            {
                printf("New\n\n");
                printf("Display_\n\n");
                printf("Exit\n\n");
                state = 0 ;
            }

            break;
        }
        case(80): //down
        {
            system("cls");


            if(state == 1)
            {
                printf("New\n\n");
                printf("Display\n\n");
                printf("Exit_\n\n");
                state = 1;
            }
            if(state  == 0)
            {
                printf("New\n\n");
                printf("Display\n\n");
                printf("Exit_\n\n");
                state = 1;
            }
            if(state  < 0)
            {
                printf("New\n\n");
                printf("Display_\n\n");
                printf("Exit\n\n");
                state = 0;
            }
            break;
        }
        case(71): //home
        {
            system("cls");
            printf("New_\n\n");
            printf("Display\n\n");
            printf("Exit\n\n");
            state = -1 ;
            break;
        }
        case(79): //end
        {
            system("cls");
            printf("New\n\n");
            printf("Display\n\n");
            printf("Exit_\n\n");
            state = 1 ;
            break;
        }
        case(9): //tab
        {
            system("cls");
            if(state == 1)
            {
                printf("New\n\n");
                printf("Display\n\n");
                printf("Exit_\n\n");
                state = 1;
            }
            if(state  == 0)
            {
                printf("New\n\n");
                printf("Display\n\n");
                printf("Exit_\n\n");
                state = 1;
            }
            if(state  < 0)
            {
                printf("New\n\n");
                printf("Display_\n\n");
                printf("Exit\n\n");
                state = 0;
            }
            break;
        }
        case(27): //esc
        {
            system("cls");
            printf("Exit Progran");
            return 0;
            break;
        }
        case(13): //Enter
        {
            system("cls");
            if(state == -1)
            {
                printf("New\n\n");
                return 0;
            }
            if(state  == 0)
            {
                printf("display\n\n");
                return 0;
            }
            if(state  == 1)
            {
                printf("exit\n\n");

                return 0;
            }
            break;
        }
        default:
        {
            printf("Wrong Input , press valid option\n");
            break;
        }
    }


    }
    return 0;
}
