#include <stdio.h>

int main(void)
{
    char given_name[30];
    char family_name[30];

    printf("What's your given name\?");
    scanf("%s", given_name);
    printf("What's your family name\?");
    scanf("%s", family_name);
    printf("%s,%s", given_name, family_name);

    return 0;
}