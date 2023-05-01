#include <stdio.h>

int main(void)
{
    double r = 0;
    const double PI = 3.1415926;

    printf("Please enter radius of a circle:");
    scanf("%lf", &r);
    // printf("%f", r);
    printf("The circumference is: %.2f\n", 2.0 * r * PI);
    printf("The area is: %.2f", PI * r * r);

    return 0;
}