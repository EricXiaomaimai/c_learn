#include <stdio.h>
#include <stdbool.h>

bool isPrimeNumber(int);
int main(void)
{
    int num;
    int m;
    int n = 0;
    bool isprime;

    printf("enter a number:");
    scanf("%d", &num);

    for(m = 2; m <= num; m++)
    {
        isprime = isPrimeNumber(m);
        if (isprime)
        {
            printf("%d ", m);
            n++;

            if (n % 10 == 0)
            {
                printf("\n");
            }            
        }
    }
    if(n == 0)
    {
        printf("can't find a prime number less than or equal to this number!");
    }
    return 0;
}
bool isPrimeNumber(int number)
{
    int n;
    bool isPrime = true;

    for (n = 2; n < number; n++)
    {
        if (number % n == 0)
        {
            isPrime = false;

            break;
        }
        
    }

    return isPrime;
}