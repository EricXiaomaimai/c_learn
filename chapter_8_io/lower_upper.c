#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int ch;
    int lower_ct;
    int upper_ct;
    lower_ct = upper_ct = 0;

    printf("enter a paragraph of text:");
    while ((ch = getchar()) != EOF)
    {
        if (islower(ch))
        {
            lower_ct++;
        }
        if (isupper(ch))
        {
            upper_ct++;
        }
    }
    
    printf("lower_ct:%d, upper_ct:%d", lower_ct, upper_ct);

    return 0;
}