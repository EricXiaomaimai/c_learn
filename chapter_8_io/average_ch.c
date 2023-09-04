#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main(void)
{
    char ch;
    long n_chars = 0L;
    int n_words = 0;
    bool inword = false;
    double average;

    printf("enter a paragraph of text:");
    while ((ch = getchar()) != EOF)
    {
        if (!ispunct(ch) && !isspace(ch) && !inword)
        {
            n_words++;
            inword =true;
        }
        if (!isspace(ch) && !ispunct(ch))
        {
            n_chars++;
        }
        if ((ispunct(ch) || isspace(ch)) && inword)
        {
            inword = false;
        }
    }
    average = (float)n_chars / (float)n_words;

    printf("average: %.2f", average);

    return 0;
}