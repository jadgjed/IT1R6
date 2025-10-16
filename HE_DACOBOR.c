#include <stdio.h>

int main() {
    int choice;
    float balance = 500.00;
    float amount;

    do {
        printf("\n TRALALELO BANK \n");
        printf("1 Balance Inquiry\n");
        printf("2 Deposit\n");
        printf("3 Withdraw\n");
        printf("4 Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nYour current balance is: %.2f\n", balance);
                break;

            case 2:
                printf("\nEnter amount to deposit: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Deposit successful!\n");
                    printf("New balance: %.2f\n", balance);
                } else {
                    printf("Invalid amount! Please enter a positive value.\n");
                }
                break;

            case 3:
                printf("\nEnter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount <= 0) {
                    printf("Invalid amount!\n");
                } else if (amount > balance - 100) {
                    printf("Withdrawal denied! You must maintain at least ₱100.00 in your account.\n");
                } else {
                    balance -= amount;
                    printf("Withdrawal successful!\n");
                    printf("Remaining balance: %.2f\n", balance);
                }
                break;

            case 4:
                printf("\nThank you for using TRALALELO BANK Goodbye!\n");
                break;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
