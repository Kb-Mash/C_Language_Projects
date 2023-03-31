#include "lib.h"

/** entry point **/

void main()
{
	float num1, num2;
	char op;

	printf("Enter a number: ");
	scanf("%f", &num1);
	printf("Enter operator: ");
	scanf(" %c", &op);
	printf("Enter a number: ");
	scanf("%f", &num2);

	float result = operatr(op, num1, num2);

	printf("%.2f\n", result);
}
