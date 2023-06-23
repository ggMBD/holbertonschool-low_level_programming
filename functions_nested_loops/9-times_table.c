#include "main.h"
/**
 * times_table - print the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int raw, colum, num;

	for (colum = 0; colum <= 9; colum++)
	{
		_putchar('0');

		for (raw = 1; raw <= 9; raw++)
		{
			_putchar(',');
			num = raw * colum;
			if (num <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(num + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
