#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function that concatenates two strings.
 * given as a parameter
 * @s1: string to copy it
 * @s2: string to copy it
 * Return: cpy
*/
char *str_concat(char *s1, char *s2)
{
	char *cpy;
	int size, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size = strlen(s1) + strlen(s2);

	cpy = (char *) malloc(sizeof(char) * (size + 1));

	if (cpy == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
	{
		cpy[i] = s1[i];
	}

	for (j = 0; s2[j]; j++)
	{
		cpy[i] = s2[j];
		i++;
	}
	cpy[i] = '\0';

	return (cpy);

	free(cpy);
}
