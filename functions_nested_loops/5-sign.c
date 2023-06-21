#include "main.h"
/**
 * print_sign - show the sign of variable
 * @n: var to test it
 * Return: 1 si n>0 / 0 si n=0 / -1 is n<0
 */

int print_sign(int n)
{
	if (n >= '1')
	{
		_putchar('+');
		return (1);
	}
	else if (n < '0')
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
