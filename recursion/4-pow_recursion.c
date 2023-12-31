/**
 * _pow_recursion -return the value of x raised to the power of y
 * @x: int
 * @y: int
 * Return: error(-1) success (x**y)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
