#include <stdio.h>
#define SINGLE 17850
#define OWNER 23900
#define MARRIED 29750
#define DIVORCED 14875
#define ORDINARY 0.15
#define EXCEED 0.28

int main(void)
{
    int category;
    double wage;
    double tax;
    double tax_money;

    while (1)
    {
        printf("1: single    2: owner    3: married    4: divorced  5: quit\nchoose a category and enter the number of the category:");
        if(scanf("%d", &category) != 1)
        {
            printf("\nthe number of the category must between 1 and 5, please re-enter the number.\n");
            while(getchar() != '\n')
                continue;
            continue;
        }

        switch(category)
        {
            case 1:
                tax_money = SINGLE;
                break;

            case 2:
                tax_money = OWNER;
                break;

            case 3:
                tax_money = MARRIED;
                break;

            case 4:
                tax_money = DIVORCED;
                break;

            case 5:
                break;

            default:
                printf("\nplease enter 1~5!\n");
                continue;            
        }
        if(category == 5)
        {
            break;
        }

        printf("enter your wage:");
        scanf("%lf", &wage);

        if(wage <= tax_money)
        {
            tax = wage * ORDINARY;
        }
        else
        {
            tax = tax_money * ORDINARY + (wage - tax_money) * EXCEED;
        }

        printf("your tax are $%.2f", tax);
        printf("\n\n");
    }
    printf("Bye");

    return 0;
}