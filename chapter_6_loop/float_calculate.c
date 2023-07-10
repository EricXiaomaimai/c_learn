#include <stdio.h>

int main(void)
{
    float num1, num2;

    printf("enter two float numbers:");
    if (scanf("%f%f", &num1, &num2) == 2)
    {
        printf("%.3f", (num1 - num2) / (num1 * num2));
    }
    else
    {
        puts("not  Significant figures");
    }
    return 0;
}