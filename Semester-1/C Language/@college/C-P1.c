#include <stdio.h>

void main()
{
    int a = 10;
    int b = 20;
    int c = 30;

    if (a != b && a != c && b != c)
    {
        printf("All are different");
    }
    else
    {
        printf("All are not different");
    }
}