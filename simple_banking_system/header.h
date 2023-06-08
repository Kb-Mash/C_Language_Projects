#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>

/*account holder information*/
typedef struct bankAccount
{
	char *pin;
	char *cardNum;
	char *accountNum;
	char *accountHolder;
	double balance;
} account;

void deposit_func(account *holder, char *accountNum);
void withdraw_func(account *holder);
void save_balance(const account *holder);
void read_balance(account *holder);
void view_balance(account *holder);
void menu(account *holder);
int cancel_transaction(account *holder);
void print_receipt(char *accountNum, double deposit);
void exit_atm();
void incorrect_accountNum(char *accountNum, account *holder);
#endif
