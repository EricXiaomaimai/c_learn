#include <stdio.h>

int main(void)
{
    int n;

    for (n = 1; n * n < 200; n += 4)
    {
        printf("%d\n", n);
    }
    int m;

    for (n = 2, m = 6; n < m; n *= 2, m += 2)
        printf("%d %d\n", n, m);
    
    putchar('!');
    putchar('\n');

    for (n = 5; n > 0; n--)
    {
        for (m = 0; m <= n; m++)
            printf("=");
        printf("\n");
    }
    return 0;
}