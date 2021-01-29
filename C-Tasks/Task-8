#include <stdio.h>
#include <stdlib.h>

#define NoStudent 3
int main()
{
     printf("___Welcome To Calculation of Degrees of student___\n");
    int arr[4][5];
    int condtion = 0 ;
    int sum = 0 ;
    float avg = 0;
    for( int i = 0 ; i < NoStudent ; i++)
    {
        for( int j = 0 ; j < 4 ; j++)
        {

            do
            {
                fflush(stdin);
                printf("Enter the degree of subject [%d] of student [%d] : " ,(i + 1), (j + 1)) ;
                scanf("%d" , &arr[i][j]) ;


                if(arr[i][j] <= 100 )
                {
                    condtion = 0 ;
                }


                if(arr[i][j] < 0)
                {

                    condtion = 1 ;

                }
                if(arr[i][j] > 100)
                {
                    printf("wrong  number entered , Please enter positive value and don't exceed 9\n\n");
                    condtion = 1 ;

                }
            }while(condtion >  0);

        }
    }

    printf("\t\tSubject 1\tSubject 2\tSubject 3\tSubject 4\tSum\n");
     /* Display the matrix */
    for (int i = 0; i < NoStudent ; i++)
    {
        sum = 0 ;
        printf("Student [%d]\t", (i+1));
        for (int j = 0; j < 4; j++)
        {
            printf("[%d]\t\t", arr[i][j]);
            sum += arr[i][j];
        }
        printf("%d" , sum);
        printf("\n");
    }

    printf("Average\t\t");
    for (int i = 0; i < 4; i++)
    {
        avg = 0 ;
        for (int j = 0; j < NoStudent ; j++)
        {

            avg = avg + (float)arr[j][i];
        }
        avg = avg / NoStudent ;
        printf("[%.2f]\t\t", avg);
    }

    return 0;
}
