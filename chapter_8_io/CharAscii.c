#include <stdio.h>

void char_ascii(int ch);
int main(void)
{
    int ch;
    int ct = 0;

    printf("enter a paragraph of text:");

    while ((ch = getchar()) != EOF)
    {
        char_ascii(ch);
        ct++;

        if ((ct % 10) == 0)
            putchar('\n');
    }
    printf("Bye.");
    return 0;
}
void char_ascii(int ch)
{
    if(ch == '\n')
    {
        printf("\\n-%d  ", '\n');
    }
    else if (ch == '\t')
    {
        printf("\\t-%d  ", '\t');
    }
    else
    {
        printf("%c-%d  ", ch, ch);
    }
}