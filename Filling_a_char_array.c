#include <stdio.h>

int main()
{
    char firstname[10];

    printf("What is your name? ");
    fgets(firstname,10,stdin);
    printf("Pleased to meet you, %s\n",firstname);
    return(0);
}
