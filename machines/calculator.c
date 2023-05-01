#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EXPR_LEN 100   // 算式的最大长度

// 定义栈结构
#define STACK_SIZE 100
typedef struct {
    int top;
    int data[STACK_SIZE];
} Stack;

// 初始化栈
void init(Stack *stack) {
    stack->top = -1;
}

// 将元素入栈
void push(Stack *stack, int x) {
    if (stack->top < STACK_SIZE - 1) {
        stack->data[++stack->top] = x;
    } else {
        printf("栈已满，无法入栈\n");
        exit(1);
    }
}

// 将栈顶元素出栈
int pop(Stack *stack) {
    if (stack->top >= 0) {
        return stack->data[stack->top--];
    } else {
        printf("栈已空，无法出栈\n");
        exit(1);
    }
}

// 获取栈顶元素
int top(Stack *stack) {
    if (stack->top >= 0) {
        return stack->data[stack->top];
    } else {
        printf("栈已空，无法获取栈顶元素\n");
        exit(1);
    }
}

// 判断一个字符是否为数字
int is_digit(char c) {
    return (c >= '0' && c <= '9');
}

// 计算两个数的和
int add(int a, int b) {
    return a + b;
}

// 计算两个数的差
int sub(int a, int b) {
    return a - b;
}

// 计算两个数的积
int mul(int a, int b) {
    return a * b;
}

// 计算两个数的商
int my_div(int a, int b) {
    return a / b;
}

// 根据运算符计算两个数的结果
int eval(char op, int a, int b) {
    if (op == '+') {
        return add(a, b);
    } else if (op == '-') {
        return sub(a, b);
    } else if (op == '*') {
        return mul(a, b);
    } else if (op == '/') {
        return my_div(a, b);
    } else {
        printf("不支持的运算符：%c\n", op);
        exit(1);
    }
}

// 判断一个字符是否为运算符
int is_op(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

// 获取运算符的优先级
int get_priority(char op) {
    if (op == '+' || op == '-') {
        return 1;
    } else if (op == '*' || op == '/') {
        return 2;
    } else {
        printf("不支持的运算符：%c\n", op);
        exit(1);
    }
}

// 计算表达式的值
int calculate(char *expr) {
    Stack num_stack;    // 数字栈
    Stack op_stack;     // 运算符栈
    init(&num_stack);
    init(&op_stack);
    
    int len = strlen(expr);
    int i = 0;
    while (i < len) {
        if (is_digit(expr[i])) {
            // 读取数字
            int x = 0;
            while (i < len && is_digit(expr[i])) {
                x = x * 10 + (expr[i] - '0');
                i++;
            }
            push(&num_stack, x);
        } else if (is_op(expr[i])) {
            // 读取运算符
            while (op_stack.top >= 0 && get_priority(top(&op_stack)) >= get_priority(expr[i])) {
                char op = pop(&op_stack);
                int b = pop(&num_stack);
                int a = pop(&num_stack);
                int result = eval(op, a, b);
                push(&num_stack, result);
            }
            push(&op_stack, expr[i]);
            i++;
        } else if (expr[i] == '(') {
            // 读取左括号
            push(&op_stack, expr[i]);
            i++;
        } else if (expr[i] == ')') {
            // 读取右括号
            while (top(&op_stack) != '(') {
                char op = pop(&op_stack);
                int b = pop(&num_stack);
                int a = pop(&num_stack);
                int result = eval(op, a, b);
                push(&num_stack, result);
            }
            pop(&op_stack); // 将左括号出栈
            i++;
        } else {
            // 非法字符
            printf("非法字符：%c\n", expr[i]);
            exit(1);
        }
    }
    
    // 处理剩余的运算符
    while (op_stack.top >= 0) {
        char op = pop(&op_stack);
        int b = pop(&num_stack);
        int a = pop(&num_stack);
        int result = eval(op, a, b);
        push(&num_stack, result);
    }
    
    // 返回最终结果
    return top(&num_stack);
}

int main() {
    char expr[MAX_EXPR_LEN];
    printf("请输入一个四则运算算式：");
    scanf("%s", expr);
    int result = calculate(expr);
    printf("结果为：%d\n", result);
    return 0;
}