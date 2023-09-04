#include <stdio.h>
char get_input(void);

int main(void)
{
    int upper = 100, lower = 0;
    int guess = 50;
    char input;

    printf("Think of a number between 0 and 100, and I'll try to guess it.\n");
    printf("if my guess is bigger than yours, please enter a 'b'. If my guess is less than yours, please enter a 'l'. If my guess is right, please enter "
    "a ' y'.\n");

    while (1)
    {
        printf("Is it  %d?", guess);
        input = get_input();

        if (input == 'y')
        {
            break;
        }
        else if (input == 'l')
        {
            lower = guess;
            guess = upper - (int)((upper - lower) / 2);
        }
        else if (input == 'b')
        {
            upper = guess;
            guess = lower + (int)((upper - lower) / 2);
        }
    }
    printf("I knew I can do it!");

    return 0;
}
char get_input(void)
{
    char ch;
    while(ch = getchar())
    {
        while (getchar() != '\n')
            continue;
        if (ch == 'b' || ch == 'l' || ch == 'y')
            break;
        printf("Your enter must be b, l or y, please re-enter the letter:");    
    }
    return ch;
}