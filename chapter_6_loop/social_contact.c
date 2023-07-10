#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    const int DUNBAR = 150;
    int friends = 5;
    int weeks = 1;

    while (true)
    {
        friends = (friends - weeks) * 2;
        printf("%dweeks: friends: %d\n", weeks, friends);

        if (friends > DUNBAR)
        {
            break;
        }
        weeks++;
    }
    return 0;
}