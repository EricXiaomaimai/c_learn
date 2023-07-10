#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int years = 1;
    double k = 1000000 + 80000;

    while (true)
    {
        k -= 100000;

        printf("%dyears: k = %.3f\n", years, k);

        if (k <= 0)
        {
            break;
        }
        
        years++;
        k += 80000;
    }
    
    printf("%dyears", years);

    return 0;
}