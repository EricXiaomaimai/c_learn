#include <stdio.h> // ����ͷ�ļ�

int main() { // ������
    char letter1, letter2; // �����ַ�����
    int num1, num2; // �������ͱ���
    char operator; // �������������

    printf("������һ��Сд��ĸ��"); // ��ʾ�û�����
    scanf(" %c", &letter1); // ��ȡ�û�����ĵ�һ��Сд��ĸ

    if (letter1 >= 'a' && letter1 <= 'z') { // �ж������Ƿ�ΪСд��ĸ
        num1 = letter1 - 'a' + 1; // ��Сд��ĸת��Ϊ����
        printf("%c ��Ӧ������Ϊ��%d\n", letter1, num1); // �����Ӧ������
        printf("������һ���������+��-��*��/����"); // ��ʾ�û�����
        scanf(" %c", &operator); // ��ȡ�û�����������

        printf("��������һ��Сд��ĸ��"); // ��ʾ�û�����
        scanf(" %c", &letter2); // ��ȡ�û�����ĵڶ���Сд��ĸ

        if (letter2 >= 'a' && letter2 <= 'z') { // �ж������Ƿ�ΪСд��ĸ
            num2 = letter2 - 'a' + 1; // ��Сд��ĸת��Ϊ����
            printf("%c ��Ӧ������Ϊ��%d\n", letter2, num2); // �����Ӧ������

            if (operator == '+') { // �ж�������Ƿ�Ϊ�ӷ�
                printf("%c + %c = %d\n", letter1, letter2, num1 + num2); // ����ӷ�������
            } else if (operator == '-') { // �ж�������Ƿ�Ϊ����
                printf("%c - %c = %d\n", letter1, letter2, num1 - num2); // �������������
            } else if (operator == '*') { // �ж�������Ƿ�Ϊ�˷�
                printf("%c * %c = %d\n", letter1, letter2, num1 * num2); // ����˷�������
            } else if (operator == '/') { // �ж�������Ƿ�Ϊ����
                if (num2 != 0) { // �жϳ����Ƿ�Ϊ0
                    printf("%c / %c = %.2f\n", letter1, letter2, (float) num1 / num2); // �������������
                } else {
                    printf("��������Ϊ0��\n"); // ��ʾ��������Ϊ0
                }
            } else {
                printf("�������������Ϸ���\n"); // ��ʾ�������������Ϸ�
            }
        } else {
            printf("�������������Сд��ĸ��\n"); // ��ʾ�������
        }
    } else {
        printf("�������������Сд��ĸ��\n"); // ��ʾ�������
    }

    return 0; // ����0����ʾ������������
}