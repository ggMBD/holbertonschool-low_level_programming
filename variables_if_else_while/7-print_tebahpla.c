#include <stdio.h>
/**
 * main - prints the alphabet in lower
 *
 * Return: 0
 */
int main(void)
{
	char alfa = 'z';

	while (alfa >= 'a')
	{
		putchar(alfa);
		alfa--;
	}
	putchar('\n');
	return (0);
}
