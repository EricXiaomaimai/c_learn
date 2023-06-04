# include <stdio.h>

#define FEET_PER_CM 30.48
#define FEET_PER_INCH 12

int main(void)
{
    float height;

    while (1)
    {
        printf("Enter a height in centimeters(<= 0 to quit):");
        scanf("%f", &height);

        if (height <= 0)
        {
            printf("bye");

            break;
        }
        else
        {
            printf("%f cm = %f feet, %f inches\n", height, height / FEET_PER_CM, height / FEET_PER_CM * FEET_PER_INCH);
        }
    }
    return 0;
}