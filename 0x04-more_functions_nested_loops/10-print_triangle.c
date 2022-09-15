#include "main.h"

/**
 * print_triangle - print a triangel
 * @size: dimensions
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n')
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= (size - i); j--)
		{
			_putchar(' ');
		}
		for (k = 1; k <= height; k--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
