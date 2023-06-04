#include <stdio.h>

long long cube(double);
int main(void)
{
    double num;
    long long result;

    printf("enter a number:");
    scanf("%lf", &num);

    result = cube(num);

    printf("the cube of %lf is %lld", num,  result);

    return 0;
}
long long cube(double n)
{
    return n * n *n;
}