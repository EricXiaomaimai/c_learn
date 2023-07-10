#include <stdio.h>

int main(void)
{
    const int ROWS = 6;
    int rows;
    char fst_letter;
    int count;

    for (rows = 1, fst_letter = 'A'; rows <= ROWS; rows++)
    {
        for (count = 1; count <= rows; count++, fst_letter++)
        {
            putchar(fst_letter);
        }

        printf("\n");
    }

    return 0;
}