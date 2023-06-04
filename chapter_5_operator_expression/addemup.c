#include <stdio.h>

int main(void)
{
    int days, sum = 0, count = 0;

    printf("enter days:");
    scanf("%d", &days);
    while (count < days)
    {
        count++;
        sum = sum + count;
    }
    
    printf("sum = %d", sum);

    return 0;
}