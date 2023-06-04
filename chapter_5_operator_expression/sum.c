#include <stdio.h>

int main(void)
{
    int n, m = 0;

    printf("enter a number:");
    scanf("%d", &n);
    printf("%d\t", n);

    while (m < 10 )
    {   
       n++;
       m++; 
       printf("%d\t", n);
    }
    
    return 0;
}