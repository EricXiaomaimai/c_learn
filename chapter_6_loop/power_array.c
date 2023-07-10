#include <stdio.h>
#include <math.h>
#define SIZE 8

int main(void)
{
    int arr[SIZE];
    double base = 2.0;
    double exponent;
    int index;

    for (index = 0, exponent = 1.0; index < SIZE && exponent <= SIZE; index++, exponent++)
    {
        arr[index] = (int)pow(base, exponent);
    }

    index = SIZE - 1;

    do
    {
        printf("%d  ", arr[index]);
        index--;
    } while (index >= 0);
    
    return 0;
}