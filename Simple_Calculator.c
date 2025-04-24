#include <stdio.h>
#include <stdlib.h>

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
