#include <stdio.h>
#include <stdlib.h>

void max_min_fun(int arrSize , int* arr)
{
    int maxNum  , minNum ;
    maxNum = arr[0];
    minNum = arr[0];
    int i ;
    for(i = 0 ; i < arrSize ; i ++)
    {
        if (arr[i]> maxNum )
        {
            maxNum = arr[i];
        }
        if (arr[i]< minNum )
        {
            minNum = arr[i];
        }
    }

    arr[0] = maxNum ;
    arr[1] = minNum ;
}
