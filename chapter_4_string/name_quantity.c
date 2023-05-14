#include <stdio.h>
#include <string.h>

int main(void)
{
    char given_name[30];
    char family_name[30];

    printf("What's your given name\?");
    scanf("%s", given_name);
    printf("What's your family name\?");
    scanf("%s", family_name);

    int num1 = strlen(given_name);
    int num2 = strlen(family_name);

    printf("%s %s\n%*d %*d\n\n", given_name, family_name, num1, num1, num2, num2);
    printf("%s %s\n%-*d %-*d", given_name, family_name, num1, num1, num2, num2);

    return 0;
}