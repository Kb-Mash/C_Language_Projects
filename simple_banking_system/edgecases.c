#include "header.h"

int cancel_transaction(account *holder)
{
    int option;

    printf("\nCancel Transaction? [0] yes / [1] no: ");
    scanf("%d", &option);
    printf("\n");

    if (option == 0)
    {
        printf("\nTransaction cancelled\n\n");
        return (0);
    }
    else if (option == 1)
    {
        return (1);
    }
}
