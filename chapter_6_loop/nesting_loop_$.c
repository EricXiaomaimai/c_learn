#include <stdio.h>

int main(void)
{
    int rows;
    int count;

    for (rows = 1; rows <= 5; rows++)
    {
        for (count = 1; count <= rows; count++)
        {
            putchar('$');
        }
        putchar('\n');
    }   
    return 0;
}