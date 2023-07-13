#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function that concatenates two strings.
 * given as a parameter
 * @s1: string to copy it
 * @s2: string to copy it
 * @n: first n bytes of s2
 * Return: cpy
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cpy;
	int size, i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size = strlen(s1);
	size += n;

	cpy = (char *) malloc(sizeof(char) * (size + 1));

	if (cpy == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
	{
		cpy[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		cpy[i] = s2[j];
		i++;
	}
	cpy[i] = '\0';

	return (cpy);

	free(cpy);
}
