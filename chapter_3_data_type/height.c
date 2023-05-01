#include <stdio.h>

int main(void)
{
    float height;   //声明变量（用浮点数的形式可以让用户输入小数)

    printf("Please input your height using inches as the unit.\n");
    scanf("%f", &height);   //用户输入身高
    printf("Your height is %.2fcm.", height * 2.54);    //将身高（英寸）转换为厘米

    return 0;
}