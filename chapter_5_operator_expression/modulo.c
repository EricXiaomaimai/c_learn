#include <stdio.h>

int main(void)
{
    long sec, fst;

    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand:");
    scanf("%d", &sec);

    if (sec <= 0)
    {
        printf("Done");
    }
    else
    {
        while (1)
        {
            printf("Enter next number for first opersnd:");
            scanf("%d", &fst);

            if (fst <= 0)
            {
                printf("Done");
                break;
            }
            else
            {
                printf("%ld %% %ld is %d\n", fst, sec, fst % sec);
            }
        }
    }
    return 0;
}