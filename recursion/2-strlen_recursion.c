/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string
 * Return: lenth s 
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
