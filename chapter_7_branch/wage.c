#include <stdio.h>

int main(void)
{
    double h;
    double wage;
    double tax;
    const double OVERTIME_BREAK = 40.0;
    const double ORDINARY_WAGE = 10.0;
    const double OVERTIME = 1.5;
    const double BREAK1 = 300.0;
    const double BREAK2 = 450.0;
    const double RATE1 = 0.15;
    const double RATE2 = 0.2;
    const double RATE3 = 0.25;

    printf("enter your work time:");
    scanf("%lf", &h);

    if(h <= OVERTIME_BREAK)
    {
        wage = h * ORDINARY_WAGE;
    }
    else
    {
        wage = ((h - OVERTIME_BREAK) * OVERTIME * ORDINARY_WAGE) + (OVERTIME_BREAK * ORDINARY_WAGE);
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

    return 0;
}