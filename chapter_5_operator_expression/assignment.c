#include <stdio.h>

int main(void)
{
    int x, y = x = 0;
    int a = 5, b = 4;
    int c;
    //  用while循环将变量x增加十
    while (x < 10)
    {
        x++;
    }

    //  y增加1
    y++;

    //  将a和b之和的两倍赋值给c
    c = (a + b) * 2;

    //  打印所有变量
    printf("x = %d\ty = %d\na = %d\tb = %d\n", x, y, a, b);


    //  将a与b的两倍之和赋值给c
    c = a * 2 + b * 2;

    //  打印c变量
    printf("Now c = %d\n", c);

    //  x减少1
    x--;

    int n = 15, k = 4, m;
    //  n和k求模的余数赋值给m
    m = n % k;

    int q = 49, h = 7, z = 2, s;
    //  将q除以h减去z的差赋值给s
    s = q / h - z;

    int num1 = 60, num2 = 6, num3 = 2, num4 = 3;
    //  num1与num2的和除以num3与num4的乘积，将其结果赋值给L
    int L = (num1 + num2) / (num3 * num4);

    //打印变量
    printf("x = %d\tm = %d\ts = %d\tL = %d", x, m, s, L);

    return 0;
}