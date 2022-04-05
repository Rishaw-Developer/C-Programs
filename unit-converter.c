#include <stdio.h>

void massConverter();
void distanceConverter();
void temperatureConverter();

int main()
{
    int run = 1;

    do
    {
        int option;
        printf("\n\n-----------------Main Menu-----------------\n");
        printf("1. Mass Converter\n");
        printf("2. Distance Converter\n");
        printf("3. Temperature Converter\n");
        printf("4. Exit\n");
        printf("What functionality do you wanna you: ");
        scanf("%d", &option);

        if (option == 1)
        {
            massConverter();
        }
        else if (option == 2)
        {
            distanceConverter();
        }
        else if (option == 3)
        {
            temperatureConverter();
        }
        else
        {
            return 0;
        }
    } while (run == 1);

    return 0;
}

void massConverter()
{
    int convType;
    float kgValue, gramValue;
    printf("Type 1 for converting kg to gram and type 2 for converting gram to kg: ");
    scanf("%d", &convType);
    if (convType == 1)
    {
        printf("Enter the kilogram value: ");
        scanf("%f", &kgValue);
        gramValue = kgValue * 1000;
        printf("Gram value: %f\ng", gramValue);
    }
    else
    {
        printf("Enter the gram value: ");
        scanf("%f", &gramValue);
        kgValue = gramValue / 1000.0;
        printf("Kilogram value: %fkg\n", kgValue);
    }
}

void distanceConverter()
{
    int convType;
    float metreValue, kiloMetreValue;
    printf("Type 1 for converting km to m and type 2 for converting m to km: ");
    scanf("%d", &convType);
    if (convType == 1)
    {
        printf("Enter the kilometre value: ");
        scanf("%f", &kiloMetreValue);
        metreValue = kiloMetreValue * 1000;
        printf("Metre value: %f\nm", metreValue);
    }
    else
    {
        printf("Enter the metre value: ");
        scanf("%f", &metreValue);
        kiloMetreValue = metreValue / 1000.0;
        printf("Kilometre value: %fkm\n", kiloMetreValue);
    }
}

void temperatureConverter()
{
    int convType;
    printf("Type 1 for converting celsius to fahrenheit and 2 for converting fahrenheit to celsius: ");
    scanf("%d", &convType);
    if (convType == 1)
    {
        float celsiusValue, fahrenheitValue;
        printf("Enter the celsius value: ");
        scanf("%f", &celsiusValue);

        fahrenheitValue = (celsiusValue * 9 / 5) + 32;
        printf("Fahrenheit value: %f °F\n", fahrenheitValue);
    }
    else
    {
        float celsiusValue, fahrenheitValue;
        printf("Enter the fahrenheit value: ");
        scanf("%f", &fahrenheitValue);

        celsiusValue = (fahrenheitValue - 32) * 5 / 9;
        printf("Celsius value: %f °C\n", celsiusValue);
    }
}