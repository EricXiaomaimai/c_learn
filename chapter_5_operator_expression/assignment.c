#include <stdio.h>

int main(void)
{
    int x, y = x = 0;
    int a = 5, b = 4;
    int c;
    //  ��whileѭ��������x����ʮ
    while (x < 10)
    {
        x++;
    }

    //  y����1
    y++;

    //  ��a��b֮�͵�������ֵ��c
    c = (a + b) * 2;

    //  ��ӡ���б���
    printf("x = %d\ty = %d\na = %d\tb = %d\n", x, y, a, b);


    //  ��a��b������֮�͸�ֵ��c
    c = a * 2 + b * 2;

    //  ��ӡc����
    printf("Now c = %d\n", c);

    //  x����1
    x--;

    int n = 15, k = 4, m;
    //  n��k��ģ��������ֵ��m
    m = n % k;

    int q = 49, h = 7, z = 2, s;
    //  ��q����h��ȥz�Ĳֵ��s
    s = q / h - z;

    int num1 = 60, num2 = 6, num3 = 2, num4 = 3;
    //  num1��num2�ĺͳ���num3��num4�ĳ˻�����������ֵ��L
    int L = (num1 + num2) / (num3 * num4);

    //��ӡ����
    printf("x = %d\tm = %d\ts = %d\tL = %d", x, m, s, L);

    return 0;
}