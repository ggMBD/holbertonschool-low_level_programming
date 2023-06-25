#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int count = 1;

	while (count <= 10)
	{
		char num = 1;

		while (num <= 14)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
			num++;
		}
		_putchar('\n');
		count++;
	}
}
