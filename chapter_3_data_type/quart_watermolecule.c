#include <stdio.h>

int main(void)
{
    double quality = 3.0e-23;
    float quart;

    printf("Please enter the number of quarts of water\n");
    scanf("%f", &quart);
    printf("Your water has %.2f water molecules", quart*950/quality);

    return 0;
}