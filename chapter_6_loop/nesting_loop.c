#include <stdio.h>

int main(void)
{
    const int ROWS = 4;
    const int COLUMNS = 8;
    int rows, columns;

    for (rows = 0; rows < ROWS; rows++)
    {
        for (columns = 0; columns < COLUMNS; columns++)
        {
            putchar('$');
        }
        putchar('\n');
    }
    return 0;
}