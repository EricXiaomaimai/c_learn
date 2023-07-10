#include <stdio.h>

int main(void)
{
    int i = 0;
    switch (i++)
    {
        case 0: printf("0, %d", i);
        break;
        case 1: printf("1, %d", i);
        break;
    }
    return 0;
}