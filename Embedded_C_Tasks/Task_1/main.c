#include <stdio.h>
#include <stdlib.h>
#include "swap_fun.h"

void swap(int a, int b);

int main()
{
   int x, y;

   printf("Enter the value of x and y\n");
   scanf("%d%d",&x,&y);

   printf("Before Swapping\nx = %d\ny = %d\n", x, y);

   swap(x, y);

   printf("Main Function values\n\nx = %d\ny = %d\n", x, y);

   return 0;
}



