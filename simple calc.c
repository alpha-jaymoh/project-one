#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void displayMenu();
void performAddition();
void performSubtraction();
void performMultiplication();
void performDivision();

int main() {
    int choice;

    printf("Welcome to the Calculator Management System!\n");

    while (1) { 
        
        displayMenu();
        
        
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        
        switch (choice) {
            case 1:
                performAddition();
                break;
            case 2:
                performSubtraction();
                break;
            case 3:
                performMultiplication();
                break;
            case 4:
                performDivision();
                break;
            case 5:
                printf("Exiting the Calculator Management System. Goodbye!\n");
                exit(0); 
            default:
                printf("Invalid choice! Please choose a valid option (1-5).\n");
        }
    }

    return 0;
}
void displayMenu() {
    printf("\n======== Calculator Management System ========\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("==============================================\n");
}

// Function to perform addition
void performAddition() {
    double num1, num2, result;
    printf("Enter two numbers to add: ");
    scanf("%lf %lf", &num1, &num2);
    result = num1 + num2;
    printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
}

// Function for subtraction
void performSubtraction() {
    double num1, num2, result;
    printf("Enter two numbers to subtract: ");
    scanf("%lf %lf", &num1, &num2);
    result = num1 - num2;
    printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
}
