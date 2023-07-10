#include <stdio.h>
#include <math.h>

int main(void)
{
    int upper, lower;

    printf("please enter the upper limit of the table:");
    scanf("%d", &upper);
    printf("please enter the lower limit of the table:");
    scanf("%d", &lower);

    printf("number\tsquare\tcube\n");

    while (lower <= upper)
    {
        printf("%d\t%ld\t%ld\n", lower, (long)pow(lower, 2), (long)pow(lower, 3));

        lower++;
    }
    return 0;
}