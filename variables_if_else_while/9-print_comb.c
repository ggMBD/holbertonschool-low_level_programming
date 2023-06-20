#include <stdio.h>
/**
 * main - prints single digit number of base 10
 *
 * Return: 0
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		if (num == '9')
			break;
		num++;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
