#include "main.h"

/**
 * print_diagonal - print character '\' n times
 * @n: number of character
 */

void print_diagonal(int n)
{
	int x;
	int y;

	for (y = 1; y <= n; y++)
	{
		for (x = 1; x < y; x++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 1)
	{
		_putchar('\n');
	}
}
