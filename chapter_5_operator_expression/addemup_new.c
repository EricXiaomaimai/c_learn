#include <stdio.h>

int main(void)
{
    int days;
    long long sum = 0, count = 0, m;

    printf("enter days:");
    scanf("%d", &days);

    while (count < days)
    {
        count++;
        m = count * count;
        sum = sum + m;
    }
    printf("sum = %lld", sum);

    return 0;
}