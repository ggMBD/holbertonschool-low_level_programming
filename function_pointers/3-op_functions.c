#include "3-calc.h"

/**
 * op_add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of the two integers.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of the subtraction (a - b).
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of the multiplication (a * b).
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two integers.
 * @a: The first integer (dividend).
 * @b: The second integer (divisor).
 *
 * Return: The result of the division (a / b).
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Computes the modulus of two integers.
 * @a: The first integer (dividend).
 * @b: The second integer (divisor).
 *
 * Return: The remainder of the division (a % b).
 */

int op_mod(int a, int b)
{
	return (a % b);
}
