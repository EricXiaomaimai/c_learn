#include <stdio.h>

int main(void)
{
    char ch;
    int char_ct = 1;

    printf("enter some chars:");
    while((ch = getchar()) != '#')
    {
        putchar(ch);
        printf("-%d   ", ch);

        if(char_ct % 8 == 0)
        {
            putchar('\n');
        }   
    }
    return 0;
}