#include <stdio.h>

int main(void)
{
    float height;   //�����������ø���������ʽ�������û�����С��)

    printf("Please input your height using inches as the unit.\n");
    scanf("%f", &height);   //�û��������
    printf("Your height is %.2fcm.", height * 2.54);    //����ߣ�Ӣ�磩ת��Ϊ����

    return 0;
}