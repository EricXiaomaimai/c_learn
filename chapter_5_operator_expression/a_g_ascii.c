#include <stdio.h>

int main(void)
{
    char ch = 'a';

    while (ch <= 'g')
    {
        printf("%5c", ch);
        
        ch++;
    }
    return 0;
}