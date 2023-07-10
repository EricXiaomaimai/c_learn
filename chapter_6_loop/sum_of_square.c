#include <stdio.h>
// #include <math.h>

int main(void)
{
    int lower, upper;
    long sum;

    printf("Enter lower and upper integer limits(e.g:5 9):");
    while (scanf("%d %d", &lower, &upper)==2)
    {   
        int num1 = lower, num2 = upper;
        if (lower >= upper)
        {
            break;
        }
        for (sum = 0; lower <= upper; lower++)
        {
            // sum += (long)pow((double)lower, 2.0);
            sum += lower * lower;

        }
        printf("The sums of the squares from %ld to %ld is %ld\n", num1 * num1, num2 * num2, sum);
        printf("Enter next set of limits:");
    }
    printf("Done");

    return 0;
}