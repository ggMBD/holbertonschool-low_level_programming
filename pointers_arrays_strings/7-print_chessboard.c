#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a:pointer to pieces to print
 * Return: Void
 */
void print_chessboard(char (*a)[8])
{
	int i_v, i_h;

	for (i_v = 0; i_v < 8; i_v++)

	{
		for (i_h = 0; i_h < 8; i_h++)
		{
			_putchar(a[i_v][i_h]);
		}
		_putchar('\n');
	}
}
