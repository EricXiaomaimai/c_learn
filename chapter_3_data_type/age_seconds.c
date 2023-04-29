#include <stdio.h>

int main(void)
{
    long s = 3.156e7;
    int age;

    printf("Please enter your age\n");
    scanf("%d", &age);
    printf("Your age is %ld seconds", age*s);

    return 0;
}