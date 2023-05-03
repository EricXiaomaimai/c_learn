#include <stdio.h>

int main() {
    int red, green, blue, color;

    printf("请输入红色的值（0-255）：");
    scanf("%d", &red);

    printf("请输入绿色的值（0-255）：");
    scanf("%d", &green);

    printf("请输入蓝色的值（0-255）：");
    scanf("%d", &blue);

    // 计算调和后的颜色值
    color = red << 16 | green << 8 | blue;

    // 输出调和后的颜色值
    printf("调和后的颜色值： #%06X\n", color);

    // 输出“颜色”这个词的颜色变成调和后的颜色值
    printf("\033[38;2;%d;%d;%dm颜色\033[0m\n", red, green, blue);

    getchar;
    return 0;
}