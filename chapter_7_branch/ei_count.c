#include <stdio.h>

int main(void)
{
    char ch;
    char last_ch = 'a';
    int ei_ct = 0;


    printf("enter a sentence:");

    while ((ch = getchar()) != '#')
    {
        if (last_ch == 'e' && ch == 'i')
        {
            ei_ct++;
        }
        last_ch = ch;
    }
    printf("the quantity of \"ei\" is %d", ei_ct);
         
    return 0;
}