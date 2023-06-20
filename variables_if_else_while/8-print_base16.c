#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char alfa = '0';

	while (alfa <= '9')
	{
		putchar(alfa);
		alfa++;
	}
	alfa = 'a';
	while (alfa <= 'f')
	{
		putchar(alfa);
		alfa++;
	}
	putchar('\n');
	return (0);
}
