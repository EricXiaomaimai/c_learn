#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[50];
    int word_count;

    printf("enter a word:");
    gets(word);

    for (word_count = strlen(word)-1; word_count >= 0; word_count--)
    {
        putchar(word[word_count]);
    }
    return 0;
}