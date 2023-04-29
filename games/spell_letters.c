#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// 定义常用单词数组
char* words[] = {"apple", "banana", "orange", "peach", "watermelon", "grape", "pineapple", "pear", "kiwi", "mango"};

int main() {
    srand(time(NULL)); // 初始化随机数生成器

    // 随机抽取一个单词
    int index = rand() % 10;
    char* word = words[index];

    // 打乱字母顺序
    int len = strlen(word);
    char* mixed_word = (char*) malloc(len + 1);
    strcpy(mixed_word, word);
    for (int i = 0; i < len; i++) {
        int j = rand() % len;
        char temp = mixed_word[i];
        mixed_word[i] = mixed_word[j];
        mixed_word[j] = temp;
    }

    // 提示用户重新拼写单词
    printf("Please spell the following words again：%s\n", mixed_word);
    char* input = (char*) malloc(len + 1);
    scanf("%s", input);

    // 判断用户拼写是否正确
    if (strcmp(input, word) == 0) {
        printf("You got it right！\n");
    } else {
        printf("Incorrect! The correct answer is：%s\n", word);
    }

    // 释放内存并结束游戏
    free(mixed_word);
    free(input);
    printf("Game over。\n");
    return 0;
}