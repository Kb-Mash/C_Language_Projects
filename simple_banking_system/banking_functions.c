#include "header.h"

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

void deposit_func(account *holder)
{
    double deposit;
    
    read_balance(holder);

    printf("\nEnter the amount to deposit:\n");
    scanf("%lf", &deposit);

    if (cancel_transaction(holder) != 0)
    {
        holder->balance += deposit;
        save_balance(holder);
    }
    else
    {
        menu(holder);
    }
}

void withdraw_func(account *holder)
{
    double withdraw;
    int insufficient = 1;

    read_balance(holder);

    do
    {
        printf("\nEnter amount to withdraw:\n");
        scanf("%lf", &withdraw);

        if (cancel_transaction(holder) != 0)
        {
            if (holder->balance <= 0.0)
            {
                insufficient = 0;
                printf("\nInsufficient funds\nAvailable funds: %.2f\n\n", holder->balance);
            }
            else if (holder->balance > 0.0 && holder->balance < withdraw)
            {
                printf("\nInsufficient funds\nAvailable funds: %.2f\n\n", holder->balance);
            }
            else
            {
                insufficient = 0;
                holder->balance -= withdraw;
                save_balance(holder);
                printf("Transaction was successful\n");
                printf("Your new balance: %.2f\n", holder->balance);
           }
        }
        else
        {
            menu(holder);
        }
    } while (insufficient);
}

void view_balance(account *holder)
{
    read_balance(holder);
    printf("\nAccount holder: %s\nAccount number: %s\n", holder->accountHolder, holder->accountNum);
    printf("Your balance is %.2f\n", holder->balance);
}