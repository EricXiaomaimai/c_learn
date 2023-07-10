#include <stdio.h>
#define SIZE 8

int main(void)
{
    int arr[SIZE];
    int index;

    printf("Enter %d numbers:", SIZE);

    for (index = 0; index < SIZE; index++)
    {
        scanf("%d", &arr[index]);
    }
    for (index = SIZE - 1; index >= 0; index--)
    {
        printf("%d ", arr[index]);
    }
    return 0;
}