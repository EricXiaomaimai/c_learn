/* charcode.c-��ʾ�ַ��Ĵ����� */
#include <stdio.h>
int main(void)
{
    char ch;

    printf("Please enter a character.\n");
    scanf("%c", &ch);   /* �û������ַ� */
    printf("The code for %c is %d.\n", ch, ch);

    int code;
    printf("please enter a ascii number.���\n");
    scanf("%d", &code);
    printf("The character for %d is %c.\n", code, code);

    return 0;
}