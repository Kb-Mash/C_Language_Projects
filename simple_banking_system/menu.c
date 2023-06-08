#include "header.h"

/**
 * print_display - displays the menu
*/
void print_display()
{
    printf("\n-------------ATM-------------\n");
    printf("\nPlease choose an option\n");
    printf("\n\t[1] Deposit\n");
    printf("\t[2] Withdraw\n");
    printf("\t[3] View Balance\n");
    printf("\t[4] Exit\n\n");
}


/**
 * check_accountNum - gets account number from user and checks
 * if it matches the account number stored
 * @holder: account struct
*/
void check_accountNum(account *holder)
{
    char accountNumber[50];

    printf("\n--------------Deposit-------------\n");
    printf("\nPlease be aware that we are not liable\nif account number is incorrect\n");
    printf("\n----------------------------------\n");
    printf("\nEnter 8-digit account number: ");
    scanf("%s", accountNumber);

    if (strcmp(holder->accountNum, accountNumber) == 0)
    {
        deposit_func(holder, accountNumber);
        menu(holder);
        return;
    }
    else
    {
        incorrect_accountNum(accountNumber, holder);
        return;
    }
}

/**
 * check_pin - gets account pin from user and checks
 * if it matches the account pin stored
 * @holder: account struct
 * Return: 0 if correct
*/
int check_pin(account *holder)
{
    char pinNum[10];
    int tries = 3;

    read_balance(holder);

    do
    {
        printf("\nEnter 4-digit pin: ");
        scanf("%s", pinNum);

        if (strcmp(pinNum, holder->pin) != 0)
        {
            --tries;
            printf("\nIncorrect pin\n");
            printf("You have %d attempts left\n", tries);
            if (cancel_transaction(holder) != 0)
            {
                return (1);
            }
        }
        else
            return (0);

    } while (tries > 0);

    printf("\nOut of attempts. Card blocked.\nPlease contact the bank office\n\n");
    return (1);
}

/**
 * check_cardNum - gets card number from user and checks
 * if it matches the card number stored
 * @holder: account struct
 * Return: 0 if correct
*/
int check_cardNum(account *holder)
{
    char cardNum[20];

    read_balance(holder);

    do
    {
        printf("\nEnter 10-digit card number: ");
        scanf("%s", cardNum);

        if (strcmp(holder->cardNum, cardNum) == 0)
        {
            if (check_pin(holder) != 0)
            {
                return (1);
            }
            return (0);
        }
        else
        {
            printf("\nIncorrect card number\n");

            if (cancel_transaction(holder) == 0)
            {
                continue;
            }
            else
            {
                menu(holder);
                return (0);
            }
        }
    } while (1);
}

/**
 * menu - calls the functions based on the option entered
 * @holder: account struct
*/
void menu(account *holder)
{
    int option;

    print_display();

    do
    {
        printf("Enter option: ");
        scanf("%d", &option);
    } while (option <= 0 || option > 4);

    if (option == 1)
        check_accountNum(holder);
    else if (option == 2 || option == 3)
    {
        if (check_cardNum(holder) == 0)
        {
            if (option == 2)
            {
                printf("\n-----------Withdraw----------\n");
                withdraw_func(holder);
                menu(holder);
                return;
            }
            else if (option == 3)
            {
                view_balance(holder);
                return;
            }
        }
        else
        {
            menu(holder);
        }
    }
    else
    {
        exit_atm();
    }
}