#include <stdio.h>

int main(void)
{
    float num;
    if(scanf("%f", &num) == 1)
    {
        printf("%f", num);
    }
    else
    {
        printf("error");
    }
    return 0;
}