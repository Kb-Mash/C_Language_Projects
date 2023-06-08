#include "header.h"


/**
 * save_balance - saves balance of the account to a file
 * @holder: account struct
*/
void save_balance(const account *holder)
{
    FILE *fp = fopen("balance.txt", "w");
    if(fp == NULL)
    {
        printf("Cannot open file for writing\n");
        return;
    }

    fprintf(fp, "%lf\n", holder->balance);

    fclose(fp);
}

/**
 * read_balance - reads balance from file and assigns the balance
 * read to the balance of the account
 * @holder: account struct
*/
void read_balance(account *holder)
{
    double balance = 0.0;
    FILE *fp = fopen("balance.txt", "r");
    if (fp == NULL)
    {
        return;
    }

    fscanf(fp, "%lf", &balance);

    fclose(fp);

    holder->balance = balance;
}

/**
 * deposit_func - option to deposit to account
 * @holder: account struct
 * @accountNum: account number to deposit to
*/
void deposit_func(account *holder, char *accountNum)
{
    double deposit;
    
    read_balance(holder);

    printf("\nEnter the amount to deposit:\n");
    scanf("%lf", &deposit);

    if (cancel_transaction(holder) == 0)
    {
        holder->balance += deposit;
        save_balance(holder);
        print_receipt(accountNum, deposit);
    }
    else
    {
        menu(holder);
    }
}


/**
 * withdraw_func - option to withdraw money from account
 * @holder: account struct
*/
void withdraw_func(account *holder)
{
    double withdraw;
    int insufficient = 1;

    read_balance(holder);

    do
    {
        printf("\nEnter amount to withdraw:\n");
        scanf("%lf", &withdraw);

        if (holder->balance <= 0.0)
        {
            printf("\nInsufficient funds\nAvailable funds: %.2f\n", holder->balance);
            menu(holder);
            insufficient = 0;
        }
        else if (holder->balance > 0.0 && holder->balance < withdraw)
        {
            printf("\nInsufficient funds\nAvailable funds: %.2f\n", holder->balance);
            if (cancel_transaction(holder) != 0)
            {
                menu(holder);
                insufficient = 0;
            }
            else
            {
                continue;
            }
        }
        else
        {
            insufficient = 0;
            holder->balance -= withdraw;
            save_balance(holder);
            printf("\n-----------------------------\n");
            printf("\nTransaction was successful\n");
            printf("Your new balance: %.2f\n", holder->balance);
            printf("\n-----------------------------\n");
        }
    } while (insufficient);
}

/**
 * view_balance - option to view balance
 * @holder: account struct
*/
void view_balance(account *holder)
{
    read_balance(holder);
    printf("\n-----------View Balance-------------\n");
    printf("\nAccount holder: %s\nAccount number: %s\n", holder->accountHolder, holder->accountNum);
    printf("Your balance is %.2f\n", holder->balance);
    printf("\n-----------------------------\n");
}