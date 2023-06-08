#include "header.h"

/**
 * exit_atm - option to exit the banking system
*/
void exit_atm()
{
    printf("\n----------Exit------------\n");
    printf("\nExit successful\nHave a good day!\n");
    printf("\n--------------------------\n\n");
}

/**
 * print_receipt - prints the receipt for the deposit transaction
 * @accountNum: the account number to deposit to
 * @deposit: the amount to deposit
*/
void print_receipt(char *accountNum, double deposit)
{
    printf("\nTransaction was successful\n");
    printf("\nAccount number: %s\n", accountNum);
    printf("Deposited amount: %.2f\n\n", deposit);
}

/**
 * cancel_transaction - gives the user an option to continue or not with
 * the transaction
 * @holder: the account struct
 * Return: 0 if option is to continue, else 1
*/
int cancel_transaction(account *holder)
{
    int option;

    printf("\n-----------------------------\n");
    printf("\nContinue Transaction?\n[0] yes / [1] no: ");
    scanf("%d", &option);
    printf("\n-----------------------------\n");

    if (option == 0)
    {
        return (0);
    }
    else if (option == 1)
    {
        printf("\nTransaction cancelled\n\n");
        return (1);
    }
}

/**
 * incorrect_accountNum - called when account number to deposit to is incorrect
 * @accountNumber: the account number entered by user
 * @holder: account struct
*/
void incorrect_accountNum(char *accountNumber, account *holder)
{
    double deposit;
    int run = 1;

     while (run)
    {
        printf("\nEnter the amount to deposit:\n");
        scanf("%lf", &deposit);
        if (cancel_transaction(holder) != 0)
        {
            menu(holder);
            return;
        }
        else
            run = 0;
    }
    print_receipt(accountNumber, deposit);
    menu(holder);
}
