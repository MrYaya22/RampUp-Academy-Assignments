#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("___Welcome To Magic Box___\n");
    int arr[3][3];
    int condtion = 0 ;
    printf("Enter Number in Array Don't Exceed than 9\n") ;
    for( int i = 0 ; i < 3 ; i++)
    {
        for( int j = 0 ; j < 3 ; j++)
        {

            do
            {
                fflush(stdin);
                printf("Array index [%d] [%d] : " ,(i + 1), (j + 1)) ;
                scanf("%d" , &arr[i][j]) ;


                if(arr[i][j] <= 9 )
                {
                    condtion = 0 ;
                }


                if(arr[i][j] < 0)
                {
                    printf("wrong negative number entered , Please enter positive value and don't exceed 9\n");
                    condtion = 1 ;

                }
                if(arr[i][j] >= 10)
                {
                    printf("wrong  number entered , Please enter positive value and don't exceed 9\n\n");
                    condtion = 1 ;

                }
            }while(condtion >  0);

        }
    }


    /* Display the matrix */
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("[%d]\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
