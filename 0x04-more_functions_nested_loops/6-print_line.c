#include "main"

/**
 * print_line - print the character "_" n times to draw a line
 * @n: number of character to draw
 */

void print_line(int n)
{
	int line = n;

	for (line = n; line > 0; line--)
		_putchar('_');

	_putchar('\n');
}
