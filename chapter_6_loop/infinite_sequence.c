#include <stdio.h>

int main(void)
{
    long count;
    long n;
    double sum = 0.0;
    printf("Enter times:");
    scanf("%d", &count);

    if (count > 0)
    {
        for (n = 1; n <= count; n++)
        {
            sum += 1.0/n;
        }
        printf("%.4f\n", sum);
        
        sum = 0.0;
        for (n = 1; n <= count; n++)
        {
            if (n % 2 == 0)
            {
                sum += -(1.0 / n);
            }
            else
            {
                sum += 1.0 / n;
            } 
        }
        printf("%.4f", sum);
    }
    else
    {
        printf("Done");
    }

    return 0;
}