#include <stdio.h>
#define INCH_FOOT 12

int main(void)
{
    float height;
    char name[30];

    printf("What's your name\?");
    scanf("%s", name);
    printf("What's your height(unit:inch)\?");
    scanf("%f", &height);
    printf("%s, you are %.3f feet tall", name, height/INCH_FOOT);

    return 0;
}