#include <stdio.h>

void jolly(void);
void deny(void);

int main(void)
{
    jolly();
    jolly();
    jolly();
    deny();

    return 0;
}

void jolly(void)    //开始定义jolly函数
{
    printf("For he's a jolly good fellow!\n");
}

void deny(void) //开始定义deny函数
{
    printf("Which nobody can deny!");
}