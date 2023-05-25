#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_PRODUCTS 100
#define MAX_NAME_LENGTH 50

typedef struct {
    char name[MAX_NAME_LENGTH];
    float price;
    int quantity;
} Product;

int num_products = 0;
Product products[MAX_PRODUCTS];

void addProduct() {
    if(num_products == MAX_PRODUCTS) {
        printf("Error: Maximum number of products reached.\n");
        return;
    }
    printf("Enter product name: ");
    scanf("%s", products[num_products].name);
    printf("Enter product price: ");
    scanf("%f", &products[num_products].price);
    printf("Enter product quantity: ");
    scanf("%d", &products[num_products].quantity);
    num_products++;
}

void listProducts() {
    printf("%-s %-s %-s\n", "Name", "Price", "Quantity");
    for(int i = 0; i < num_products; i++) {
        printf("%-s $%-f %-d\n", products[i].name, products[i].price, products[i].quantity);
    }
}

void searchProduct() {
    char name[MAX_NAME_LENGTH];
    printf("Enter product name: ");
    scanf("%s", name);
    for(int i = 0; i < num_products; i++) {
        if(strcmp(name, products[i].name) == 0) {
            printf("%-s $%f %d\n", products[i].name, products[i].price, products[i].quantity);
            return;
        }
    }
    printf("Error: Product not found.\n");
}

void removeProduct() {
    char name[MAX_NAME_LENGTH];
    printf("Enter product name: ");
    scanf("%s", name);
    for(int i = 0; i < num_products; i++) {
        if(strcmp(name, products[i].name) == 0) {
            for(int j = i; j < num_products - 1; j++) {
                products[j] = products[j+1];
            }
            num_products--;
            printf("Product removed successfully.\n");
            return;
        }
    }
    printf("Error: Product not found.\n");
}

int main() {
    int choice;
    do {
        printf("\nSupermarket Management System\n");
        printf("1. Add product\n");
        printf("2. List products\n");
        printf("3. Search product\n");
        printf("4. Remove product\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                addProduct();
                break;
            case 2:
                listProducts();
                break;
            case 3:
                searchProduct();
                break;
            case 4:
                removeProduct();
                break;
            case 0:
                printf("Exiting program.\n");
                break;
            default:
                printf("Error: Invalid choice.\n");
                break;
        }
    } while(choice != 0);
    
}
