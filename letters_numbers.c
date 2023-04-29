#include <stdio.h> // 包含头文件

int main() { // 主函数
    char letter1, letter2; // 定义字符变量
    int num1, num2; // 定义整型变量
    char operator; // 定义运算符变量

    printf("请输入一个小写字母："); // 提示用户输入
    scanf(" %c", &letter1); // 获取用户输入的第一个小写字母

    if (letter1 >= 'a' && letter1 <= 'z') { // 判断输入是否为小写字母
        num1 = letter1 - 'a' + 1; // 将小写字母转换为数字
        printf("%c 对应的数字为：%d\n", letter1, num1); // 输出对应的数字
        printf("请输入一个运算符（+、-、*、/）："); // 提示用户输入
        scanf(" %c", &operator); // 获取用户输入的运算符

        printf("请输入另一个小写字母："); // 提示用户输入
        scanf(" %c", &letter2); // 获取用户输入的第二个小写字母

        if (letter2 >= 'a' && letter2 <= 'z') { // 判断输入是否为小写字母
            num2 = letter2 - 'a' + 1; // 将小写字母转换为数字
            printf("%c 对应的数字为：%d\n", letter2, num2); // 输出对应的数字

            if (operator == '+') { // 判断运算符是否为加法
                printf("%c + %c = %d\n", letter1, letter2, num1 + num2); // 输出加法运算结果
            } else if (operator == '-') { // 判断运算符是否为减法
                printf("%c - %c = %d\n", letter1, letter2, num1 - num2); // 输出减法运算结果
            } else if (operator == '*') { // 判断运算符是否为乘法
                printf("%c * %c = %d\n", letter1, letter2, num1 * num2); // 输出乘法运算结果
            } else if (operator == '/') { // 判断运算符是否为除法
                if (num2 != 0) { // 判断除数是否为0
                    printf("%c / %c = %.2f\n", letter1, letter2, (float) num1 / num2); // 输出除法运算结果
                } else {
                    printf("除数不能为0！\n"); // 提示除数不能为0
                }
            } else {
                printf("输入的运算符不合法！\n"); // 提示输入的运算符不合法
            }
        } else {
            printf("输入错误，请输入小写字母！\n"); // 提示输入错误
        }
    } else {
        printf("输入错误，请输入小写字母！\n"); // 提示输入错误
    }

    return 0; // 返回0，表示程序正常结束
}