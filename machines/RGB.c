#include <stdio.h>

int main() {
    int red, green, blue, color;

    printf("�������ɫ��ֵ��0-255����");
    scanf("%d", &red);

    printf("��������ɫ��ֵ��0-255����");
    scanf("%d", &green);

    printf("��������ɫ��ֵ��0-255����");
    scanf("%d", &blue);

    // ������ͺ����ɫֵ
    color = red << 16 | green << 8 | blue;

    // ������ͺ����ɫֵ
    printf("���ͺ����ɫֵ�� #%06X\n", color);

    // �������ɫ������ʵ���ɫ��ɵ��ͺ����ɫֵ
    printf("\033[38;2;%d;%d;%dm��ɫ\033[0m\n", red, green, blue);

    getchar;
    return 0;
}