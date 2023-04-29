#include <stdio.h>

int main(void)
{
    float num;

    printf("Enter a flaotint-point value:");
    scanf("%f", &num);
    printf("fix-point notation: %f\n", num);
    printf("exponential notation: %e\n", num);
    printf("p notation: %a", num);

    return 0;
}