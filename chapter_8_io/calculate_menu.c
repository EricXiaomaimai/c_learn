#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void menu(void);
char get_choice(void);
double get_num(char ch);
double calculate(double num1, double num2, char ch);
int main(void)
{
    double fst, sec;
    char choice;
    double result;

    while (1)
    {
        menu();
        choice = get_choice();

        if(choice == 'q')
        {
            break;
        }

        printf("Enter first number:");
        fst = get_num(choice);
        printf("Enter second number:");
        sec = get_num(choice);

        result = calculate(fst, sec, choice);
        
        printf("%.2f %c %.2f = %.2f", fst, choice, sec, result);

        sleep(3);
    }
    printf("Bye.");

    return 0;
}

void menu(void)
{
    printf("Enter the operation of your choice:\n");
    printf("a. add            s. subtract\n");
    printf("m. multiply       d. divide\n");
    printf("q. quit\n");
}
char get_choice(void)
{
    char ch;

    while (ch = getchar())
    {
        while (getchar() != '\n')
            continue;
        
        switch(ch)
        {
            case 'a':
            case 'A':
                return '+';
            
            case 's':
            case 'S':
                return '-';
            
            case 'm':
            case 'M':
                return '*';
            
            case 'd':
            case 'D':
                return '/';
            
            case 'q':
            case 'Q':
                return 'q';

            default :
                printf("Your choice must be a s m d or q, please re-enter the number.");
                menu();
                continue;
        }
    }
}

double get_num(char ch)
{
    char str[80];
    double num;

    while (1)
    {
        scanf("%s", str);
        while(getchar() != '\n')
            continue;

        num = atof(str);

        if (num == 0.0 && ch == '/')
        {
            printf("Enter a number other than 0:");
            continue;
        }
        else if(num == 0.0)
        {
            printf("%s is not an number");
            printf("\nPlease enter a number, such as 2.5, 1.78E8, or 3:");
            continue;
        }
        else
        {
            return num;
        }
        
    }
}

double calculate(double num1, double num2, char ch)
{
    switch(ch)
    {
        case '+':
            return num1 + num2;
        
        case '-':
            return num1 - num2;
        
        case '*':
            return num1 * num2;
        
        case '/':
            return num1 / num2;
        
        default:
            return 0.0;
    }
}