#include "main.h"

/**
 * print_last_digit - print last digit
 * @num: int to test it
 * Return: last digit of last
 */
int print_last_digit(int num)
{
	int last = num % 10;

	if (last < 0)
		last *= -1;
	_putchar(last + '0');
	return (last);
}

