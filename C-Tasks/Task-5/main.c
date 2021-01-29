#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N = 0 ;
    int arraySize = 0 ;

    printf("Enter Array Size :");
    scanf("%d", &arraySize);

    int array[arraySize];
    for (int i = 0 ; i < arraySize ; i++)
    {
        printf("Enter Element %d of array : " , (i +1) ) ;
        scanf("%d", &array[i]);
    }

    max_min_fun(arraySize , array);

    printf("\n %d \n %d \n", array[0] , array[1]);

    return 0;
}
