#include <stdio.h>
#include <ctype.h>
char get_first(void);

int main(void)
{
    printf("enter a paragraph of text:");
    char ch = get_first();
    printf("erstes nicht leeres Zeichen: %c", ch);

    return 0;
}
char get_first(void)
{
    char ch;
    while (ch = getchar())
    {
        if (!isspace(ch))
            break;
    }
    while (getchar() != '\n')
        continue;
    return ch;
} 