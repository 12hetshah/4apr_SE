#include <stdio.h>

int main() {
    float mass, converted_mass;
    int choice;

    printf("Enter the mass: ");
    scanf("%f", &mass);

    printf("Select the unit of mass:\n");
    printf("1. Kilograms (kg)\n");
    printf("2. Grams (g)\n");
    printf("3. Pounds (lb)\n");
    printf("4. Ounces (oz)\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            converted_mass = mass;
            printf("%.2f kg = %.2f kg\n", mass, converted_mass);
            break;
        case 2:
            converted_mass = mass / 1000;
            printf("%.2f g = %.2f kg\n", mass, converted_mass);
            break;
        case 3:
            converted_mass = mass / 2.20462;
            printf("%.2f lb = %.2f kg\n", mass, converted_mass);
            break;
        case 4:
            converted_mass = mass / 35.274;
            printf("%.2f oz = %.2f kg\n", mass, converted_mass);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }
printf("1 kilogram (kg) = 1000 grams (g)");
1 kilogram (kg) = 2.20462 pounds (lb);
1 kilogram (kg) = 35.274 ounces (oz);

    return 0;
}

