#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EXPR_LEN 100   // ��ʽ����󳤶�

// ����ջ�ṹ
#define STACK_SIZE 100
typedef struct {
    int top;
    int data[STACK_SIZE];
} Stack;

// ��ʼ��ջ
void init(Stack *stack) {
    stack->top = -1;
}

// ��Ԫ����ջ
void push(Stack *stack, int x) {
    if (stack->top < STACK_SIZE - 1) {
        stack->data[++stack->top] = x;
    } else {
        printf("ջ�������޷���ջ\n");
        exit(1);
    }
}

// ��ջ��Ԫ�س�ջ
int pop(Stack *stack) {
    if (stack->top >= 0) {
        return stack->data[stack->top--];
    } else {
        printf("ջ�ѿգ��޷���ջ\n");
        exit(1);
    }
}

// ��ȡջ��Ԫ��
int top(Stack *stack) {
    if (stack->top >= 0) {
        return stack->data[stack->top];
    } else {
        printf("ջ�ѿգ��޷���ȡջ��Ԫ��\n");
        exit(1);
    }
}

// �ж�һ���ַ��Ƿ�Ϊ����
int is_digit(char c) {
    return (c >= '0' && c <= '9');
}

// �����������ĺ�
int add(int a, int b) {
    return a + b;
}

// �����������Ĳ�
int sub(int a, int b) {
    return a - b;
}

// �����������Ļ�
int mul(int a, int b) {
    return a * b;
}

// ��������������
int my_div(int a, int b) {
    return a / b;
}

// ��������������������Ľ��
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
        printf("��֧�ֵ��������%c\n", op);
        exit(1);
    }
}

// �ж�һ���ַ��Ƿ�Ϊ�����
int is_op(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

// ��ȡ����������ȼ�
int get_priority(char op) {
    if (op == '+' || op == '-') {
        return 1;
    } else if (op == '*' || op == '/') {
        return 2;
    } else {
        printf("��֧�ֵ��������%c\n", op);
        exit(1);
    }
}

// ������ʽ��ֵ
int calculate(char *expr) {
    Stack num_stack;    // ����ջ
    Stack op_stack;     // �����ջ
    init(&num_stack);
    init(&op_stack);
    
    int len = strlen(expr);
    int i = 0;
    while (i < len) {
        if (is_digit(expr[i])) {
            // ��ȡ����
            int x = 0;
            while (i < len && is_digit(expr[i])) {
                x = x * 10 + (expr[i] - '0');
                i++;
            }
            push(&num_stack, x);
        } else if (is_op(expr[i])) {
            // ��ȡ�����
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
            // ��ȡ������
            push(&op_stack, expr[i]);
            i++;
        } else if (expr[i] == ')') {
            // ��ȡ������
            while (top(&op_stack) != '(') {
                char op = pop(&op_stack);
                int b = pop(&num_stack);
                int a = pop(&num_stack);
                int result = eval(op, a, b);
                push(&num_stack, result);
            }
            pop(&op_stack); // �������ų�ջ
            i++;
        } else {
            // �Ƿ��ַ�
            printf("�Ƿ��ַ���%c\n", expr[i]);
            exit(1);
        }
    }
    
    // ����ʣ��������
    while (op_stack.top >= 0) {
        char op = pop(&op_stack);
        int b = pop(&num_stack);
        int a = pop(&num_stack);
        int result = eval(op, a, b);
        push(&num_stack, result);
    }
    
    // �������ս��
    return top(&num_stack);
}

int main() {
    char expr[MAX_EXPR_LEN];
    printf("������һ������������ʽ��");
    scanf("%s", expr);
    int result = calculate(expr);
    printf("���Ϊ��%d\n", result);
    return 0;
}