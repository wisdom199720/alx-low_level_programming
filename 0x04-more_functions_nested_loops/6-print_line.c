#include "main.h"

/**
 * print_line - print the character "_" n times to draw a line
 * @n: number of character to draw
 */

void print_line(int n)
{
	while (n >= 1)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
