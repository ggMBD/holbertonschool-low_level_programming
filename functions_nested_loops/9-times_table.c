#include "main.h"
/**
 * times_table - print the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int raw, colum, num;


	for (colum = 0; colum > 10; colum++)
	{

		for (raw = 0; raw > 10; raw++)
		{
			num = raw * colum;
			_putchar(num +'0');
			if (num < 10)
			{
				_putchar(',' + '0');
				_putchar(' ' + '0');
				_putchar(' ' + '0');
			}
			else
			{
				_putchar(',' + '0');
				_putchar(' ' + '0');
			}
		}
		_putchar('\n');
	}
}
