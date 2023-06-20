#include <stdio.h>
/**
 * main - prints the alphabet in lowercase except q and e
 * Return: 0
 */
int main(void)
{
	char alfa = 'a';

	while (alfa <= 'z')
	{
		if (alfa != 'q' && alfa != 'e')
			putchar (alfa);
		alfa++;
	}
	putchar('\n');
	return (0);
}
