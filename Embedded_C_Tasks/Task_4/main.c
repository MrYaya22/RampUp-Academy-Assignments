#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MaxLen 40
#define ESC 27
#define Left 75
#define Right 77
#define Home 71
#define End 79
#define Enter 13

typedef enum{
True , False} Status;

/*
 * shift text starting from current pointer address
 * to the right and return the new end pointer address
 */
void ShiftText(char *currentptr, char *lastptr);


/* Display current text to the console */
void displayLineEditor(char * startPtr, char * currPtr, char * endPtr);


/* check if char. is alphabetical character */
Status Alpabet(char c);


int main()
{
    int status = 0;
    char tempchar = 0 ;

    char txt[MaxLen] = {0} ;

    /* start_ptr is a pointer to the first char in the text */
    char * start_ptr = &txt[0];

    /* start_ptr is a pointer to the last char in the text */
    char * end_ptr = &txt[0];

    /* current_ptr is a pointer to curser('_') in the text */
    char * current_ptr = &txt[0];


    /* accept key strokes until text length reach 40 characters ,ESC key is pressed or ENTER key is pressed */
    while(((end_ptr - start_ptr) < MaxLen) && (tempchar != ESC)  && (tempchar != Enter))
    {
       tempchar = getch();
       /* check if key stroke is an extended key */
       if ((tempchar == 0) || (tempchar == -32))
       {
            tempchar = getch();
            /* chick if current pointer is not at the end of the text when right key is pressed */
            if((tempchar == Right) && (current_ptr != end_ptr))
            {
               current_ptr++;
            }

            else if((tempchar == Left) && (current_ptr != start_ptr))
            {
                current_ptr--;
            }
            else if (tempchar == Home)
            {
                current_ptr = start_ptr;
            }
            else if (tempchar == End)
            {
                current_ptr = end_ptr;
            }

        }
        else if((Alpabet(tempchar)) == True )
        {
            if (current_ptr == end_ptr)
            {
                *(current_ptr ) = tempchar ;

                current_ptr++ ;
                end_ptr++ ;
            }
            else
            {
                ShiftText(current_ptr ,end_ptr) ;

                *(current_ptr) = tempchar ;

                end_ptr++ ;

            }
        }

        displayLineEditor(start_ptr , current_ptr , end_ptr);

    }

    *(end_ptr ) = '\0' ;
    printf("\n%s\n" ,txt) ;
    return 0 ;


}


Status Alpabet(char c)
{
    if(((c >= 'A')&& (c <='Z'))||
       (c >= 'a') && (c <= 'z'))
    {
        return True ;
    }
    return False;
}


void ShiftText(char *currentptr , char *lastptr)
{
    for (int i = (lastptr - currentptr) ; i>= 0 ;i--)
    {
        *(currentptr + 1 + i) = *(currentptr + i) ;
    }
}

void displayLineEditor(char * startPtr, char * currPtr, char * endPtr)
{
    int textLen = endPtr - startPtr ;
    system("cls") ;
    for(int i = 0 ; i<= textLen ;i++)
    {
        if((startPtr + i ) != currPtr)
        {
            printf("%c" , *(startPtr + i)) ;
        }
        else
        {
            printf("_") ;
        }
    }
    printf("\n") ;
}
