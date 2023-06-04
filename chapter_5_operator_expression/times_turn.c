#include <stdio.h>

int main(void)
{
    int min, h, min2;
    const int H_PER_MIN = 60;

    while (1)
    {
        printf("Please enter the number of minutes (<=0 to quit):");
        scanf("%d", &min);

        if (min <= 0)
        {
            printf("Bye!");

            break;
        }
        else
        {
            min2 = min % H_PER_MIN;
            h = min / H_PER_MIN;

            printf("%dmin = %dh and %dmin\n", min, h, min2);
        }
    }
    
    return 0;
}