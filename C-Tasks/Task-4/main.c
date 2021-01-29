#include <stdio.h>
#include <stdlib.h>


int reverse_fun(int num) ;
int main()
{
    int N = 0 ;
    printf("Enter Number\n");
    scanf("%d" , &N);
    N = reverse_fun(N);
    fflush(stdin);
    printf(" REVERSE ORDER %d",N );

    return 0;
}




int reverse_fun(int num)
{
    int temp = 0 ;

    while (num != 0)
    {
        temp = temp * 10;
        temp = temp + (num%10) ;
        num = num / 10 ;
    }
    return temp ;
}
