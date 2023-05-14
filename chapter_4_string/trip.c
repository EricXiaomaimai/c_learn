#include <stdio.h>
#define GALLON_METER 3.785
#define MILE_KILOMETER 1.609

int main(void)
{
    double mile, gallon, liter, kilometer;

    printf("Please enter the mileage of your trip(unit:mile)");
    scanf("%lf", &mile);
    printf("Please enter the amount of gasoline consumed during this trip(unit:gallon)");
    scanf("%lf", &gallon);
    printf("Can travel %.1f miles per gallon of gasoline.\n", mile / gallon);

    liter = gallon * GALLON_METER;
    kilometer = mile * MILE_KILOMETER;
    double kilometer_liter = liter / kilometer;

    printf("%.1f liters of gasoline are consumed per 100 kilometers.",kilometer_liter * 100 );

    return 0;
}