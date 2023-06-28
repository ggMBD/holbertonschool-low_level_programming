#include "main.h"
/**
 * *_strcpy - strcpy
 * @dest: destination
 * @src: source
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
