#include <stdio.h>

int main(void)
{
    float number;

    printf("Please enter a float number");
    scanf("%f", &number);
    printf("The input is %.1f or %e.\n", number, number);
    printf("The input is %+.3f or %E.", number, number);

    return 0;
}