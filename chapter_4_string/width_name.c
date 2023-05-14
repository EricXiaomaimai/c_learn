#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[30];
    
    printf("What's your name\?");
    scanf("%s", name);

    int width = strlen(name)+3;

    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    printf("%*s\n", width, name);

    return 0;
}