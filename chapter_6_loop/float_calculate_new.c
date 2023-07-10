#include <stdio.h>

double float_cal(float, float);
int main(void)
{
    float num1, num2;

    printf("enter two float numbers:");
    if (scanf("%f%f", &num1, &num2) == 2)
    {
        printf("%.3f", float_cal(num1, num2));
    }
    else
    {
        puts("not  Significant figures");
    }
    return 0;
}
double float_cal(float num1, float num2)
{
    return (double)((num1 - num2) / (num1 * num2));
}