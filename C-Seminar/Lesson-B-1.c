#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{

    int a = 10;
    int b = 20;
    int c = 30;
    int d = 0;
    if (a > b)
    {
        d = 1;
    }
    else
    {
        if (a > c)
        {
            d = 2;
        }
        else
        {
            d = 3;
        }
    }

    d = (a > b && b<80) ? (1) : ((a > c) ? (2) : (3));

    printf("%d", d);
    printf("%d", (a > b) ? (1) : ((a > c) ? (2) : (3)));

    return 0;
}