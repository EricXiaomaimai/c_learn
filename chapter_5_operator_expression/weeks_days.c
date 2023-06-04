#include <stdio.h>

int main(void)
{
    int days, weeks, days2;
    const int WEEK_PER_DAYS = 7;

    while (1)
    {
        printf("enter days:");
        scanf("%d", &days);

        if (days <= 0)
        {
            break;
        }
        else
        {
            days2 = days % WEEK_PER_DAYS;
            weeks = days / WEEK_PER_DAYS;

            printf("%d days are %d weeks, %d days\n", days, weeks, days2);            
        }
    }
    return 0;
}