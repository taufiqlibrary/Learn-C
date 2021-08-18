#include <stdio.h>

int getch(void)
{
    int ch;

    ch = getchar();
    while(getchar()!='\n')
        ;
    return(ch);
}
