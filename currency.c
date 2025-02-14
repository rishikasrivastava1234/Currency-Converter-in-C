
#include <stdio.h>

void displayMenu() {
    printf("Currency Converter\n");
    printf("===================\n");
    printf("Select the currency conversion option:\n");
    printf("1. USD to INR\n");
    printf("2. INR to USD\n");
    printf("3. EUR to INR\n");
    printf("4. INR to EUR\n");
    printf("5. USD to EUR\n");
    printf("6. EUR to USD\n");
    printf("7. GBP to INR\n");
    printf("8. INR to GBP\n");
    printf("9. JPY to INR\n");
    printf("10. INR to JPY\n");
    printf("11. AUD to INR\n");
    printf("12. INR to AUD\n");
    printf("0. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;
    float amount, convertedAmount;

    // Exchange rates (hardcoded for demonstration purposes)
    const float USD_TO_INR = 82.5;
    const float EUR_TO_INR = 90.1;
    const float USD_TO_EUR = 0.91;
    const float GBP_TO_INR = 105.7;
    const float JPY_TO_INR = 0.56;
    const float AUD_TO_INR = 54.3;

    do {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter amount in USD: ");
                scanf("%f", &amount);
                convertedAmount = amount * USD_TO_INR;
                printf("Converted amount in INR: %.2f\n", convertedAmount);
                break;
            case 2:
                printf("Enter amount in INR: ");
                scanf("%f", &amount);
                convertedAmount = amount / USD_TO_INR;
                printf("Converted amount in USD: %.2f\n", convertedAmount);
                break;
            case 3:
                printf("Enter amount in EUR: ");
                scanf("%f", &amount);
                convertedAmount = amount * EUR_TO_INR;
                printf("Converted amount in INR: %.2f\n", convertedAmount);
                break;
            case 4:
                printf("Enter amount in INR: ");
                scanf("%f", &amount);
                convertedAmount = amount / EUR_TO_INR;
                printf("Converted amount in EUR: %.2f\n", convertedAmount);
                break;
            case 5:
                printf("Enter amount in USD: ");
                scanf("%f", &amount);
                convertedAmount = amount * USD_TO_EUR;
                printf("Converted amount in EUR: %.2f\n", convertedAmount);
                break;
            case 6:
                printf("Enter amount in EUR: ");
                scanf("%f", &amount);
                convertedAmount = amount / USD_TO_EUR;
                printf("Converted amount in USD: %.2f\n", convertedAmount);
                break;
            case 7:
                printf("Enter amount in GBP: ");
                scanf("%f", &amount);
                convertedAmount = amount * GBP_TO_INR;
                printf("Converted amount in INR: %.2f\n", convertedAmount);
                break;
            case 8:
                printf("Enter amount in INR: ");
                scanf("%f", &amount);
                convertedAmount = amount / GBP_TO_INR;
                printf("Converted amount in GBP: %.2f\n", convertedAmount);
                break;
            case 9:
                printf("Enter amount in JPY: ");
                scanf("%f", &amount);
                convertedAmount = amount * JPY_TO_INR;
                printf("Converted amount in INR: %.2f\n", convertedAmount);
                break;
            case 10:
                printf("Enter amount in INR: ");
                scanf("%f", &amount);
                convertedAmount = amount / JPY_TO_INR;
                printf("Converted amount in JPY: %.2f\n", convertedAmount);
                break;
            case 11:
                printf("Enter amount in AUD: ");
                scanf("%f", &amount);
                convertedAmount = amount * AUD_TO_INR;
                printf("Converted amount in INR: %.2f\n", convertedAmount);
                break;
            case 12:
                printf("Enter amount in INR: ");
                scanf("%f", &amount);
                convertedAmount = amount / AUD_TO_INR;
                printf("Converted amount in AUD: %.2f\n", convertedAmount);
                break;
            case 0:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
        printf("\n");
    } while (choice != 0);

    return 0;
}























