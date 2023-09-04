#include <stdio.h>

int main(void)
{
    int ch;
    int char_ct = 0;

    printf("enter a paragraph of text:");

    while ((ch = getchar()) != EOF)
    {
        if (ch != '\n')
        {
            char_ct++;
        }
    }
    printf("char_ct: %d", char_ct);
    return 0;
}