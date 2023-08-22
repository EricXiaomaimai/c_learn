#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[10];
    double num;
    
    scanf("%s", str);
    
    num = atof(str);

    if (num != 0.0)
    {
        printf("num = %f", num);
    }
    else
    {
        printf("%s is not a number", str);
    }

    return 0;
}