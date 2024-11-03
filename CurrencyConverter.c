#include <stdio.h>
void convert(float amount, char source_currency, char target_currency)
{
    float converted_amount = 0.0;
    float usdToInr = 83.0;
    float usdToEur = 0.94;
    float eurToInr = 88.3;
    float usdToGbp = 0.77;
    float eurToGbp = 0.84;
    float gbpToInr = 108.71;
    if (source_currency == 'I' && target_currency == 'U')
    {
        converted_amount = amount / usdToInr;
        printf("%.2f INR = %.2f USD\n", amount, converted_amount);
    }
    else if (source_currency == 'I' && target_currency == 'E')
    {
        converted_amount = amount / eurToInr;
        printf("%.2f INR = %.2f EUR\n", amount, converted_amount);
    }
    else if (source_currency == 'I' && target_currency == 'P')
    {
        converted_amount = amount / gbpToInr;
        printf("%.2f INR = %.2f GBP\n", amount, converted_amount);
    }
    else if (source_currency == 'U' && target_currency == 'I')
    {
        converted_amount = amount * usdToInr;
        printf("%.2f USD = %.2f INR\n", amount, converted_amount);
    }
    else if (source_currency == 'U' && target_currency == 'E')
    {
        converted_amount = amount * usdToEur;
        printf("%.2f USD = %.2f EUR\n", amount, converted_amount);
    }
    else if (source_currency == 'U' && target_currency == 'P')
    {
        converted_amount = amount * usdToGbp;
        printf("%.2f USD = %.2f GBP\n", amount, converted_amount);
    }
    else if (source_currency == 'E' && target_currency == 'I')
    {
        converted_amount = amount * eurToInr;
        printf("%.2f EUR = %.2f INR\n", amount, converted_amount);
    }
    else if (source_currency == 'E' && target_currency == 'U')
    {
        converted_amount = amount / usdToEur;
        printf("%.2f EUR = %.2f USD\n", amount, converted_amount);
    }
    else if (source_currency == 'E' && target_currency == 'P')
    {
        converted_amount = amount * eurToGbp;
        printf("%.2f EUR = %.2f GBP\n", amount, converted_amount);
    }
    else if (source_currency == 'P' && target_currency == 'I')
    {
        converted_amount = amount * gbpToInr;
        printf("%.2f GBP = %.2f INR\n", amount, converted_amount);
    }
    else if (source_currency == 'P' && target_currency == 'E')
    {
        converted_amount = amount / eurToGbp;
        printf("%.2f GBP = %.2f EUR\n", amount, converted_amount);
    }
    else if (source_currency == 'P' && target_currency == 'U')
    {
        converted_amount = amount / usdToGbp;
        printf("%.2f GBP = %.2f USD\n", amount, converted_amount);
    }
    else
    {
        printf("Invalid Currency Code Entered.\n");
    }
}
int main()
{
    char choice;
    do
    {
        float amount;
        char source_currency, target_currency;
        printf("Enter source currency (U for USD, I for INR, E for EUR, P for GBP) : ");
        scanf(" %c", &source_currency);
        if (source_currency == 'I')
        {
            printf("Enter target currency (U for USD, E for EUR, P for GBP) : ");
            scanf(" %c", &target_currency);
        }
        else if (source_currency == 'U')
        {
            printf("Enter target currency (I for INR, E for EUR, P for GBP) : ");
            scanf(" %c", &target_currency);
        }
        else if (source_currency == 'E')
        {
            printf("Enter target currency (U for USD, I for INR, P for GBP) : ");
            scanf(" %c", &target_currency);
        }
        else if (source_currency == 'P')
        {
            printf("Enter target currency (U for USD, E for EUR, I for INR) : ");
            scanf(" %c", &target_currency);
        }
        printf("Enter the amount : ");
        scanf("%f", &amount);
        convert(amount, source_currency, target_currency);
        printf("Do you want to convert another currency (y/n)? : ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    printf("Thank you for using the currency converter!\n");
}