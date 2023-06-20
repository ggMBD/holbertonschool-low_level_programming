#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char alfa = 'a';

	while (alfa <= 'z')
	{
		putchar(alfa);
		alfa++;
	}
	putchar('\n');
	return (0);
}
