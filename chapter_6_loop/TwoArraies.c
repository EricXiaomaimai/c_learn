#include <stdio.h>
#define SIZE 8

int main(void)
{
    double arr1[SIZE];
    double arr2[SIZE];
    int index;

    printf("enter %d numbers for array1:", SIZE);

    for (index = 0; index < SIZE; index++)
    {
        scanf("%lf", &arr1[index]);
    }
    for (index = 0; index < SIZE; index++)
    {
        double sum;
        int i = index;

        for (sum = 0.0; i >= 0; i--)
        {
            sum += arr1[i];
        }

        arr2[index] = sum;
    }
    for (index = 0; index < SIZE; index++)
    {
        printf("%10.2f", arr1[index]);
    }

    printf("\n");

    for (index = 0; index < SIZE; index++)
    {
        printf("%10.2f", arr2[index]);
    }
    
    return 0;
}