#include <stdio.h>
#include <stdlib.h>


void swap(int a, int b)
{
   int temp;

   temp = b;
   b = a;
   a = temp;
    printf("Swapping in function\n\nx = %d\ny = %d\n", a, b);
}


