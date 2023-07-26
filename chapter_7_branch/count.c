#include <stdio.h>

int main(void)
{
    int even_ct, even_sum;
    int odd_num_ct, odd_num_sum;
    int num;
    even_ct = even_sum = 0;
    odd_num_ct = odd_num_sum = 0; 

    printf("enter numbers:");

    while(1)
    {
        scanf("%d", &num);

        if(num != 0)
        {
            if(num % 2 == 0)
            {
                even_ct++;
                even_sum = even_sum + num;
            }
            else
            {
                odd_num_ct++;
                odd_num_sum = odd_num_sum + num;
            }
        }
        else
        {
            break;
        }
    }

    printf("the quantity of the evens is %d, the mean of the evens is %.2f.\n", even_ct, (double)even_sum / even_ct);
    printf("the quantity of the odd numbers is %d, the mean of the odd numbers is %.2f.\n Done", odd_num_ct, (double)odd_num_sum / odd_num_ct);

    return 0;
}