#include "main.h"
/**
 * *leet - encript a string
 * @input: input
 * Return: nex input
 */
char *leet(char *input)
{
	int index = 0;
	int counter;
	int up[] = {65, 69, 79, 84, 76};
	int lw[] = {97, 101, 111, 116, 108};
	int num[] = {52, 51, 48, 55, 49};

	while (input[index] != '\0')
	{
		for (counter = 0; counter < 5; counter++)
		{
			if (input[index] == up[counter] || input[index] == lw[counter])
				input[index] = num[counter];
		}
		index++;
	}
	return (input);
}
