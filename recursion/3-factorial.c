/**
 * factorial - function that returns the factorial of a given number
 * @n: number
 * Return: error (-1) success (factorial of n)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	if (n > 0)
		return (n * factorial(n - 1));
}
