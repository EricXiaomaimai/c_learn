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
    
    float foot_height = height / INCH_FOOT;
    if (foot_height - 1.0 < 1e-6)
    {
        printf("%s, you are 1 foot tall", name);
    }
    else
    {
        printf("%s, you are %.3f feet tall", name, foot_height);
    }

    return 0;
}
