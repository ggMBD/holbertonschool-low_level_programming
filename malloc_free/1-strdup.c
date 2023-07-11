#include <stdlib.h>
/**
 * _strdup - returns a pointer
 * to a newly allocated space in memory
 * which contains a copy of the string
 * given as a parameter
 * @str: string to copy it
 * Return: cpy
*/
char *_strdup(char *str)
{
	char *cpy;
	int msize = 1, i;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		msize++;
	}

	cpy = malloc(sizeof(char) * msize);

	if (cpy == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		cpy[i] = str[i];
	}

	cpy[i] = '\0';

	return (cpy);
	free(cpy);
}
