#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @input: input string
 * Return: input
 */
char *cap_string(char *input)
{
	int index = 0;

	while (input[index] != '\0')

	{
		if (input[index] >= 97 && input[index] <= 122)

		{
			if (index == 0)

			{
				input[index] -= 32;
			}

			if (input[index - 1] == 32 || input[index - 1] == 9 ||
			input[index - 1] == 10 ||
			input[index - 1] == 44 || input[index - 1] == 59 ||
			input[index - 1] == 46 || input[index - 1] == 124 ||
			input[index - 1] == 33 || input[index - 1] == 63 ||
			input[index - 1] == 34 || input[index - 1] == 40 ||
			input[index - 1] == 41 || input[index - 1] == 123 ||)
				{
					input[index] -= 32;
				}
		}
		index++;
	}
	return (input);
}
