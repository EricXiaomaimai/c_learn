#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// ���峣�õ�������
char* words[] = {"apple", "banana", "orange", "peach", "watermelon", "grape", "pineapple", "pear", "kiwi", "mango"};

int main() {
    srand(time(NULL)); // ��ʼ�������������

    // �����ȡһ������
    int index = rand() % 10;
    char* word = words[index];

    // ������ĸ˳��
    int len = strlen(word);
    char* mixed_word = (char*) malloc(len + 1);
    strcpy(mixed_word, word);
    for (int i = 0; i < len; i++) {
        int j = rand() % len;
        char temp = mixed_word[i];
        mixed_word[i] = mixed_word[j];
        mixed_word[j] = temp;
    }

    // ��ʾ�û�����ƴд����
    printf("Please spell the following words again��%s\n", mixed_word);
    char* input = (char*) malloc(len + 1);
    scanf("%s", input);

    // �ж��û�ƴд�Ƿ���ȷ
    if (strcmp(input, word) == 0) {
        printf("You got it right��\n");
    } else {
        printf("Incorrect! The correct answer is��%s\n", word);
    }

    // �ͷ��ڴ沢������Ϸ
    free(mixed_word);
    free(input);
    printf("Game over��\n");
    return 0;
}