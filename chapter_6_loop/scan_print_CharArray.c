#include <stdio.h>
#include <string.h>
#define SIZE 256

int main(void)
{
    char str[SIZE];

    printf("Enter a sentence:");
    scanf("%s", str);

    int index;

    for (index = strlen(str) - 1; index >= 0; index--)
    {
        printf("%c", str[index]);
    }

    return 0;
}