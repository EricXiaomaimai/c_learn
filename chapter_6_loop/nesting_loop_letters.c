#include <stdio.h>

int main(void)
{
    char fst_letters;
    int rows;
    int count;

    for (rows = 1; rows <= 6; rows++)
    {
        for (fst_letters = 'F', count = 1; count <= rows; fst_letters--, count++)
        {
            putchar(fst_letters);
        }
        putchar('\n');
    }
    return 0;
}