#include "lib.h"

/** function for operators **/

/**
 * operator - returns result based on the operator chosen
 * @op: array containing the operator characters
 *
 * Return: result of the operation
 */
float operatr(char op, float num1, float num2)
{
	switch(op)
	{
		case '+':
			return add(num1, num2);
		case '-':
			return sub(num1, num2);
		case '/':
			return divi(num1, num2);
		case '*':
			return mult(num1, num2);
		default:
			printf("Invalid operator\n");
			printf("Available operators: +, -, *, /\n");
			exit(98);
	};
}
