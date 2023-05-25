#include <stdio.h>

int main() {
    float distance;
    int choice;

    printf("Enter the distance: ");
    scanf("%f", &distance);

    printf("\n1. Kilometers to Miles");
    printf("\n2. Miles to Kilometers");
    printf("\n3. Meters to Miles");
    printf("\n4. Miles to Meters");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("\n%f kilometers = %f miles\n", distance, distance * 0.621371);
            break;

        case 2:
            printf("\n%f miles = %f kilometers\n", distance, distance * 1.60934);
            break;

        case 3:
            printf("\n%f meters = %f miles\n", distance, distance * 0.000621371);
            break;

        case 4:
            printf("\n%f miles = %f meters\n", distance, distance * 1609.34);
            break;

        default:
            printf("\nInvalid choice.\n");
            break;
    }

    return 0;
}
1
