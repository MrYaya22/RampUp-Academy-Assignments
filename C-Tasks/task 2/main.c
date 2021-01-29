#include <stdio.h>
#include <stdlib.h>

int main()
{

    char choice;


    printf("Please Choose a or b or c \n") ;
    printf("a) Good morning.\nb) Good evening.\nc) Exit program.\n") ;



    choice = getch() ; //Get Char
    fflush(stdin);
    system("cls"); //clear Screen
     if (choice == 'a' || choice == 'A')
        {
            printf("Good morning.\n");
        }
        else if(choice == 'b'|| choice ==  'B')
        {
            printf("Good evening.\n");
        }
        else if((choice == 'c')||(choice == 'C'))
        {
            printf("Clear Screen.\n");
        }
        else
        {
            printf("Wrong Input\n");
        }





    return 0;
}
