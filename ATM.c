#include <stdio.h>
int main()
{
    int choice;
    float balance = 5000, amount;

    printf("===== ATM MENU ===== \n");
    printf("1. Check Balance \n");
    printf("2. Withdraw Money \n");
    printf("3. Deposit Money \n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Your balance is: %.2f\n", balance);
            break;

        case 2:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);

            if(amount > 0 && amount <= balance)
            {
                balance = balance - amount;
                printf("Withdrawal successful!\n");
                printf("Remaining balance: %.2f\n", balance);
            }
            else
            {
                printf("Invalid amount or insufficient balance!\n");
            }
            break;

        case 3:
            printf("Enter the amount to deposit : ");
            scanf("%f", &amount);

            if(amount > 0)
            {
                balance = balance + amount;
                printf("Deposit successful!\n");
                printf("Updated balance: %.2f\n", balance);
            }
            else
            {
                printf("Invalid amount!\n");
            }
            break;
        case 4:
            {
                printf("THANK YOU FOR USING THE ATM \n");
            }
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}