#include<stdio.h>
int main()
{
    int choice;
    float temp, result;
    printf("Temperature Conversion Menu:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temp);
            result = (temp * 9/5) + 32;
            printf("Fahrenheit:%f\n",result);
            break;
        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &temp);
            result = (temp - 32) * 5/9;
            printf("celsius:%f\n",result);
            break;
        default:
            printf("Error:Invalid choice! Please select either 1 or 2.\n");
    }
    return 0;
}