#include <stdio.h>

int main(void)
{
    float cups;

    printf("Please input the volume of your water using cups as the unit.\n");  //提示用户输入水的杯数
    scanf("%f", &cups); //用户输入杯数
    printf("Your water is %.2f pint.\n", cups / 2);

    float ounce = cups * 8;

    printf("Your water is %.2f ounce.\n", ounce);

    float spoon = ounce * 2;

    printf("Your water is %.2f spoon.\n", spoon);

    float tea_spoon = spoon * 3;

    printf("Your water is %.2f tea spoon.\n", tea_spoon);

    return 0;

}