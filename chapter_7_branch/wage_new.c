#include <stdio.h>
#include <unistd.h>

int main(void)
{
    double h;
    double wage;
    double tax;
    const double OVERTIME_BREAK = 40.0;
    const double OVERTIME = 1.5;
    const double EXPENSE1 = 8.75;
    const double EXPENSE2 = 9.33;
    const double EXPENSE3 = 10.0;
    const double EXPENSE4 = 11.2;
    const double BREAK1 = 300.0;
    const double BREAK2 = 450.0;
    const double RATE1 = 0.15;
    const double RATE2 = 0.2;
    const double RATE3 = 0.25;
    const int STARS = 65;
    int star;
    int num;

    while (1)
    {    
        printf("\n\n");
        for (star = 1; star <= STARS; star++)
        {
            putchar('*');
        }
        printf("\n\n");
        printf("Enter the number corresponding to the desired");
        printf("pay rate or action:\n");
        printf("1)\t$%.2f/hr\t\t\t\t\t2)\t$%.2f/hr\n", EXPENSE1, EXPENSE2);
        printf("3)\t$%.2f/hr\t\t\t\t\t4)\t$%.2f/hr\n", EXPENSE3, EXPENSE4);
        printf("5)\tquit\n");

        for (star = 1; star <= STARS; star++)
        {
            putchar('*');
        }
        printf("\nplease input your option: ");
        scanf("%d", &num);

        switch(num)
        {
            case 1:
            printf("enter your work time:");
            scanf("%lf", &h);
            if(h <= OVERTIME_BREAK)
            {
                wage = h * EXPENSE1;
            }
            else
            {
                wage = ((h - OVERTIME_BREAK) * OVERTIME * EXPENSE1) + (OVERTIME_BREAK * EXPENSE1);
            }
            break;

            case 2:
            printf("enter your work time:");
            scanf("%lf", &h);
            if(h <= OVERTIME_BREAK)
            {
                wage = h * EXPENSE2;
            }
            else
            {
                wage = ((h - OVERTIME_BREAK) * OVERTIME * EXPENSE2) + (OVERTIME_BREAK * EXPENSE2);
            }
            break;                  

            case 3:
            printf("enter your work time:");
            scanf("%lf", &h);
            if(h <= OVERTIME_BREAK)
            {
                wage = h * EXPENSE3;
            }
            else
            {
                wage = ((h - OVERTIME_BREAK) * OVERTIME * EXPENSE3) + (OVERTIME_BREAK * EXPENSE3);
            }
            break;

            case 4:
            printf("enter your work time:");
            scanf("%lf", &h);
            if(h <= OVERTIME_BREAK)
            {
                wage = h * EXPENSE4;
            }
            else
            {
                wage = ((h - OVERTIME_BREAK) * OVERTIME * EXPENSE4) + (OVERTIME_BREAK * EXPENSE4);
            }
            break;

            case 5:
            printf("done");
            break;
        }

        if (num == 5)
        {
            break;
        }
        if (!(num >= 1 && num <= 5))
        {
            printf("please choose a effective number");
            sleep(3);
            continue;
        }
        
        printf("Your wage is $%.2f\n", wage);

        if (wage <= BREAK1)
        {
            tax = wage * RATE1;  
        }
        else if (wage <= BREAK2)
        {
            tax = BREAK1 * RATE1 + (wage - BREAK1) * RATE2; 
        }
        else
        {
            tax = BREAK1 * RATE1 + (BREAK2 - BREAK1) * RATE2 + (wage - BREAK2) * RATE3;
        }
    
        printf("Your tax is $%.2f\n", tax);
        printf("Your net income is $%.2f", wage - tax);
        sleep(3);     
    }

    return 0;
}