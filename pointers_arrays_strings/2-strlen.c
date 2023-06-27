/**
 * _strlen - length of string
 * @s: sting
 * Return: length of s
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
