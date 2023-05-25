#include <stdio.h>

int main() {
    float value, result;
    int choice;

    printf("Enter the value to be converted: ");
    scanf("%f", &value);

    printf("Enter the choice of conversion:\n");
    printf("1. Square meter to square feet\n");
    printf("2. Square feet to square meter\n");
    printf("3. Hectare to acre\n");
    printf("4. Acre to hectare\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            result = value * 10.764;
            printf("%.2f square meters is equal to %.2f square feet.\n", value, result);
            break;
        case 2:
            result = value / 10.764;
            printf("%.2f square feet is equal to %.2f square meters.\n", value, result);
            break;
        case 3:
            result = value * 2.471;
            printf("%.2f hectares is equal to %.2f acres.\n", value, result);
            break;
        case 4:
            result = value / 2.471;
            printf("%.2f acres is equal to %.2f hectares.\n", value, result);
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}

