#include <stdio.h>
#include <unistd.h>
#define STARS 65
#define EXPENSE1  8.75
#define EXPENSE2  9.33
#define EXPENSE3  10.0
#define EXPENSE4  11.2

char get_select(void);
void menu(const int STAR_CT, const double e1, const double e2, const double e3, const double e4);
int main(void)
{
    double h;
    double wage;
    double tax;
    const double OVERTIME_BREAK = 40.0;
    const double OVERTIME = 1.5;
    const double BREAK1 = 300.0;
    const double BREAK2 = 450.0;
    const double RATE1 = 0.15;
    const double RATE2 = 0.2;
    const double RATE3 = 0.25;
    char select;

    while (1)
    {
        menu(STARS, EXPENSE1, EXPENSE2, EXPENSE3, EXPENSE4);
    
        select = get_select();

        switch(select)
        {
            case 'a':
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

            case 'b':
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

            case 'c':
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

            case 'd':
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

            case 'q':
                printf("done");
                break;
        }

        if (select == 'q')
        {
            break;
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
    }

    return 0;
}

char get_select(void)
{
    char ch;

    while(ch = getchar())
    {
        if(ch == '\n')
            continue;

        while (getchar() != '\n')
            continue;        
        if (ch == 'a' || ch == 'b' || ch == 'c'  || ch == 'd' || ch == 'q')
            break;
        printf("your enter must be a, b, c, d or q, please re-enter the number.");
        menu(STARS, EXPENSE1, EXPENSE2, EXPENSE3, EXPENSE4);
    }


    return ch;
}

void menu(const int STAR_CT, double e1, double e2, double e3, double e4)
{
    sleep(3);

    int star;
    printf("\n\n");
    for (star = 1; star <= STAR_CT; star++)
    {
        putchar('*');
    }
    printf("\n\n");
    printf("Enter the number corresponding to the desired");
    printf("pay rate or action:\n");
    printf("a)\t$%.2f/hr\t\t\t\t\tb)\t$%.2f/hr\n", EXPENSE1, EXPENSE2);
    printf("c)\t$%.2f/hr\t\t\t\t\td)\t$%.2f/hr\n", EXPENSE3, EXPENSE4);
    printf("q)\tquit\n");

    for (star = 1; star <= STARS; star++)
    {
        putchar('*');
    }
    printf("\nplease input your option: ");    
}