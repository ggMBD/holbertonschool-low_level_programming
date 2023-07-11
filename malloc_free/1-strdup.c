#include <stdlib.h>
char *_strdup(char *str)
{
    char *cpy;
    int i = 0;

	if (str == NULL)
		return (NULL);

    cpy = (char *)malloc (str);

    while(str[i] != '\0')
    {
        cpy[i] = str[i];
        i++;
    }
    cpy[i] = '\0';
    return (cpy);
}