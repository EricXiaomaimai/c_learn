#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void)
{
    int years = 1;
    double K1, K2;

    while (true)
    {
        K1 = 100 + (10 * years);
        K2 = 100 * (pow(1.05, (double)years));

        printf("Year%d: K1 = %.3f K2 = %.3f\n", years, K1, K2);

        if (K2 > K1)
        {
            break;
        }
        years++;
    }
    printf("%dyears", years);

    return 0;    
}