#include <stdio.h>

int main(void)
{
    char ch;
    int replacement;

    printf("enter some sentences:");
    
    while((ch = getchar()) != '#')
    {
        if(ch == '.')
        {
            putchar('!');
            replacement++;
        }
        else if(ch == '!')
        {
            puts("!!");
            replacement++;
        }
        else
        {
            putchar(ch);
        }
    }
    printf("\nMade %d replacements.", replacement);

    return 0;
}