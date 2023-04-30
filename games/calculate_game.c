#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // ��ʼ���������

    char answer[100]; // �洢�û�����Ĵ�
    int num1, num2, result;
    char operator;
    int correct_answers = 0; // ��¼�û���Ե���Ŀ����

    while (1) {
        // ���������������һ����������
        num1 = rand() % 1000;
        num2 = rand() % 1000;
        operator = "+-*/"[rand() % 4];

        if (operator == '/') {
            // ��������������ĳ���
            num2 = rand() % (num1 + 1);
            result = num1 / num2;
        } else {
            // ������
            switch (operator) {
                case '+':
                    result = num1 + num2;
                    break;
                case '-':
                    result = num1 - num2;
                    break;
                case '*':
                    result = num1 * num2;
                    break;
            }
        }

        // ��ӡ��Ŀ����ȡ�û�����Ĵ�
        printf("%d %c %d = ", num1, operator, num2);
        scanf("%s", answer);

        if (strcmp(answer, "��Ϸ����") == 0) {
            printf("��Ϸ��������һ������� %d �⡣\n", correct_answers);
            break;
        } else if (strcmp(answer, "��һ��") == 0) {
            continue;
        }

        // ����û�����Ĵ��Ƿ���ȷ
        if (atoi(answer) == result) {
            printf("�����ˣ�\n");
            correct_answers++;
        } else {
            printf("��û�д�ԣ���ȷ���� %d��\n", result);
        }
    }

    return 0;
}