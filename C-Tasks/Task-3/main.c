#include <stdio.h>
#include <stdlib.h>

int main()
{

    char choice;






    while(1)
    {
    system("cls"); //clear Screen
    printf("Please Choose a or b or c or e \n") ;
    printf("a) Good morning.\nb) Good evening.\nc) Clear Screen.\ne) Exit program.\n") ;
    choice = getch() ; //Get Char
    fflush(stdin);


     if (choice == 'a' || choice == 'A')
        {
            system("cls"); //clear Screen
            printf("Good morning.\n");
        }
        else if(choice == 'b'|| choice ==  'B')
        {
            system("cls"); //clear Screen
            printf("Good evening.\n");
        }
        else if((choice == 'c')||(choice == 'C'))
        {
            system("cls"); //clear Screen
            printf("Clear Screen.\n");
        }
        else if((choice == 'e')||(choice == 'E'))
        {
            system("cls"); //clear Screen
            printf("Exit Screen.\n");
            return ;
        }

        else
        {
            system("cls"); //clear Screen
            printf("Wrong Input\n");
        }
        printf("Press any Key") ;
        choice = getch() ; //Get Char

        fflush(stdin);
        }



    return 0;
}
