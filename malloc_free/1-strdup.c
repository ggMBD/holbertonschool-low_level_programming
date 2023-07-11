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
    int i = 0;

	if (str == NULL)
		return (NULL);

    cpy = (char *)malloc (sizeof(*str));

    while(str[i] != '\0')
    {
        cpy[i] = str[i];
        i++;
    }
    cpy[i] = '\0';
    return (cpy);
    free (cpy);
}
