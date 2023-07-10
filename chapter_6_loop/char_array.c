#include <stdio.h>

int main(void)
{
    char letters[26];
    char fst;
    const int LETTERS_NUMBER = 26;
    int numbers;

    for(fst = 'a', numbers = 0; fst <= 'z' && numbers < LETTERS_NUMBER; fst++, numbers++)
    {
        letters[numbers] = fst;
    }
    for(numbers = 0; numbers < LETTERS_NUMBER; numbers++)
    {
        printf("%c ", letters[numbers]);
    }
    return 0;
}