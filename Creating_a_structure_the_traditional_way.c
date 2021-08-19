#include <stdio.h>

int main()
{

    struct id
    {
        char first[20];
        char last[20];
    };

    struct date
    {
        int mounth;
        int day;
        int year;
    };

    struct human
    {
        struct id name;
        struct date birthday;
    };
}
