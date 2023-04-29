/* charcode.c-显示字符的代码编号 */
#include <stdio.h>
int main(void)
{
    char ch;

    printf("Please enter a character.\n");
    scanf("%c", &ch);   /* 用户输入字符 */
    printf("The code for %c is %d.\n", ch, ch);

    int code;
    printf("please enter a ascii number.你好\n");
    scanf("%d", &code);
    printf("The character for %d is %c.\n", code, code);

    return 0;
}