#include "main.h"

/**
 * print_triangle - print a triangel
 * @size: dimensions
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = size - 1; j < 0; j--)
		{
			_putchar(' ');
		}
		for (j = i; j > 0; j--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
