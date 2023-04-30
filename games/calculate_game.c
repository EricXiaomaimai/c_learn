/*
此游戏用来让用户计算1000以内的四则运算题目。此游戏有以下功能：
1.  如果用户答对了，则提示用户你答对了
2.  如果用户没有答对，则提示用户你没有答对，然后输出正确答案
3.  第一道题完成后会自动弹出第二道计算题，继续让用户答题
4.  如果用户输入“游戏结束”，则计算答对的题目数量然后结束程序
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // 初始化随机种子

    char answer[100]; // 存储用户输入的答案
    int num1, num2, result;
    char operator;
    int correct_answers = 0; // 记录用户答对的题目数量

    while (1) {
        // 生成两个随机数和一个随机运算符
        num1 = rand() % 1000;
        num2 = rand() % 1000;
        operator = "+-*/"[rand() % 4];

        if (operator == '/') {
            // 避免出现有余数的除法
            num2 = rand() % (num1 + 1);
            result = num1 / num2;
        } else {
            // 计算结果
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

        // 打印题目并读取用户输入的答案
        printf("%d %c %d = ", num1, operator, num2);
        scanf("%s", answer);

        if (strcmp(answer, "游戏结束") == 0) {
            printf("游戏结束，你一共答对了 %d 题。\n", correct_answers);
            break;
        } else if (strcmp(answer, "下一题") == 0) {
            continue;
        }

        // 检查用户输入的答案是否正确
        if (atoi(answer) == result) {
            printf("你答对了！\n");
            correct_answers++;
        } else {
            printf("你没有答对，正确答案是 %d。\n", result);
        }
    }

    return 0;
}