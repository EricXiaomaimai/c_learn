#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch, c, m;

    printf("Please enter an uppercase:");
    ch = getchar();

    if (isupper(ch))
    {
        for (c = 'A'; c <= ch; c++)
        {
            for (m = ch; m > c; m--)
            {
                putchar(' ');
            }
            for (m = 'A'; m < c; m++)
            {
                putchar(m);
            }
            for (m = c; m >= 'A'; m--)
            {
                putchar(m);
            }
            printf("\n");
        }
    }
    else
    {
        puts("please enter an uppercase!");
    }
    return 0;
}