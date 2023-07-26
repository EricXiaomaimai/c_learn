#include <stdio.h>

int main(void)
{
    char ch;
    int space_ct, enter_ct, chars_ct;
    space_ct = enter_ct = chars_ct = 0;

    printf("enter some chars:");

    while((ch = getchar()) != '#')
    {
        if(ch == ' ')
        {
            space_ct++;
        }
        else if(ch == '\n')
        {
            enter_ct++;
        }
        else
        {
            chars_ct++;
        }
    }
    printf("there are %d spaces, %d enters, %d other chars.", space_ct, enter_ct, chars_ct);

    return 0;
}