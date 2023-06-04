#include <stdio.h>
#include <stdbool.h>

void Temperatures(double);

int main(void)
{
    double temp;

    while(1)
    {
        printf("Enter temperatures(unit:¨H):");

        bool input_is_good = scanf("%lf", &temp);

        if (true == input_is_good)
        {
            Temperatures(temp);
        }
        else
        {
            printf("Done");
            break;
        }
    }
    return 0;
}
void Temperatures(double temp)
{
    const double TO_CELSIUS1 = 5.0/9.0;
    const double TO_CELSIUS2 = 32.0;
    const double TO_KELVIN = 273.16;
    double celsius = TO_CELSIUS1 * (temp - TO_CELSIUS2);
    double kelvin = celsius + TO_KELVIN;

    printf("%.2f¨H = %.4f¡æ = %.4fK\n", temp, celsius, kelvin);
}