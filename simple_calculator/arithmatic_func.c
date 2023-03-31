#include "lib.h"

/** functions for the arithmethic operations **/

/**
 * add - add two number
 * @num1: first number in the equation
 * @num2: second number in the equation
 *
 * Return: result
 */
float add(float num1, float num2)
{
	return (num1 + num2);
}

/**
 * divi - divides two number
 * @num1: first number in the equation
 * @num2: second number in the equation
 *
 * Return: result
 */
float divi(float num1, float num2)
{
	if (num2 == 0)
	{
		printf("Can't divide by 0\n");
		exit(98);
	}
	return (num1 / num2);
}

/**
 * mult - multiplies two number
 * @num1: first number in the equation
 * @num2: second number in the equation
 *
 * Return: result
 */
float mult(float num1, float num2)
{
	return (num1 * num2);
}

/**
 * sub - subtracts two number
 * @num1: first number in the equation
 * @num2: second number in the equation
 *
 * Return: result
 */
float sub(float num1, float num2)
{
	return (num1 - num2);
}
