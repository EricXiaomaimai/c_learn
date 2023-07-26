#include <stdio.h>
#define ARTICHOKE 2.05
#define BEET 1.15
#define CARROT 1.09
#define DISCOUNT 0.05
#define DISCOUNT_MONEY 100.0
#define FREIGHT_POUNDS1 5.0
#define FREIGHT1 6.5
#define FREIGHT_POUNDS2 20.0
#define FREIGHT2 14.0
#define EXCEED 0.5

int main(void)
{
    char ch;
    double artichoke_pounds, beet_pounds, carrot_pounds;
    artichoke_pounds = beet_pounds = carrot_pounds = 0.0;
    double artichoke_money, beet_money, carrot_money;
    artichoke_money = beet_money = carrot_money = 0.0;
    double artichoke_1, beet_1, carrot_1;
    double freight = 0.0;
    double discount = 0.0;
    double vegetables_TotalCost = 0.0;
    double GrossWeight = 0.0;
    double TotalCost = 0.0;

    printf("price: artichoke: $%.2f/pound    beet: $%.2f/pound    carrot: $%.2f/pound\n", ARTICHOKE, BEET, CARROT);
    printf("enter \"a\" to input the weight of artichokes, enter \"b\" to input the weight of beets, enter \"c\" to input the weight of carrots, enter \"q\" to qiut\n");
    printf("choose a letter in \"a b c\" or \"q\" and input your letter:");

    while(1)
    {
        while((ch = getchar()) == '\n')
            continue;
        
        while(getchar() != '\n')
            continue;
        
        if(ch == 'q')
            break;
        
        switch(ch)
        {
            case 'a':
            case 'A':
                printf("enter the weight of artichokes:");
                scanf("%lf", &artichoke_1);
                artichoke_pounds += artichoke_1;
                break;

            case 'b':
            case 'B':
                printf("enter the weight of beets:");
                scanf("%lf", &beet_1);
                beet_pounds += beet_1;
                break;

            case 'c':
            case 'C':
                printf("enter the weight of carrot:");
                scanf("%lf", &carrot_1);
                carrot_pounds += carrot_1;
                break;

            default:                 
                printf("your letter must be a, b, c or q. please re-enter the letter:");
                continue;
        }

        artichoke_money = artichoke_pounds * ARTICHOKE;
        beet_money = beet_pounds * BEET;
        carrot_money = carrot_pounds * CARROT;
        vegetables_TotalCost = artichoke_money + beet_money + carrot_money;
        GrossWeight = artichoke_pounds + beet_pounds + carrot_pounds;

        if(vegetables_TotalCost >= DISCOUNT_MONEY)
        {
            discount = DISCOUNT;
        }
        else
        {
            discount = 0.0;
        }

        if(GrossWeight <= FREIGHT_POUNDS1)
        {
            freight = FREIGHT1;
        }
        else if(GrossWeight <= FREIGHT_POUNDS2)
        {
            freight = FREIGHT2;
        }
        else
        {
            freight = FREIGHT2 + (GrossWeight - FREIGHT_POUNDS2) * EXCEED;
        }

        TotalCost = vegetables_TotalCost * (1.0 - discount) + freight;

        printf("enter next letter: ");
    }
    printf("list:\n");
    printf("weight: %.2fpounds\n", GrossWeight);
    printf("vegetables: artichoke $%.2f\tbeet $%.2f\tcarrot $%.2f\n", artichoke_money, beet_money, carrot_money);
    printf("total cost of vegetables: %.2f\n", vegetables_TotalCost);
    
    if(discount > 0)
    {
        printf("discount: %d%%\n", (int)(discount * 100));
    }
    else
    {
        printf("discount: no discount\n");
    }

    printf("freight and packing costs:%.2f\n", freight);
    printf("total cost: %.2f", TotalCost);

    return 0;
} 