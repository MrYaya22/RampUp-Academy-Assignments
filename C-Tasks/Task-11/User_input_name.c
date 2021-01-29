void user_Input(unsigned char *str , unsigned int numOfChar )
{
    for (int i = 0; i < (numOfChar-1) ; i++) {

        str[i] = getch();
        printf("*");
        if(str[i]== 13)
        {
            str[i] = '\0' ;
            break;
        }
    }
    str[(numOfChar-1)] = '\0' ;  // To make Last Element null
}
