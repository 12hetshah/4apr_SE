#include <stdio.h>

int main() {
    float value, result, distance;
    int choice,a,b;

	printf("1. Length Calculator\n");
	printf("2. Distance Calculator\n\n");
	printf("Enter Your Choice : ");
	scanf("%d",&choice); 	
	switch(choice)
	{
	case 1:
		{
		
    printf("Enter the value to be converted: ");
    scanf("%f", &value);

    printf("Enter the choice of conversion:\n");
    printf("1. Square meter to square feet\n");
    printf("2. Square feet to square meter\n");
    printf("3. Hectare to acre\n");
    printf("4. Acre to hectare\n");
    printf("***************\n");
    printf("Enter Your Choice : ");
	scanf("%d",&a);
      switch(a) {
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
}break;

	case 2:
		{
		
    printf("Enter the distance: ");
    scanf("%f", &distance);
    printf("\n1. Kilometers to Miles");
    printf("\n2. Miles to Kilometers");
    printf("\n3. Meters to Miles");
    printf("\n4. Miles to Meters");
    printf("***************\n");
    printf("Enter Your Choice : ");
	scanf("%d",b);
	switch(b)
	{
	          
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
            printf("Invalid choice.\n");
            break;
    }
}

case 3:
	printf("Exiting Code");

default:
            printf("Invalid choice.\n");
            break;
        
}while(choice != 3);
    return 0;
}


