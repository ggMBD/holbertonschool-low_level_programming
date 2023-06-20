#include <stdio.h>
/**
 * main - prints single digit number of base 10
 *
 * Return: 0
 */
int main(void)
{
	char num = '0';
	char sp = ' ';
	char cama = ',';

	while (num <= '9')
	{
		putchar(num);
		putchar(cama);
		putchar(sp);
		num++;
	}
	putchar('\n');
	return (0);
}
