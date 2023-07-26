#include <stdio.h>

int main(void)
{
    char ch;
    int replacement;

    printf("enter some sentences:");
    
    while((ch = getchar()) != '#')
    {
        switch (ch)
        {
            case '.':
                putchar('!');
                replacement++;
                break;
            case '!':
                puts("!!");
                replacement++;
                break;
            default:
                putchar(ch);
        }
    }
    printf("\nMade %d replacements.", replacement);

    return 0;
}        