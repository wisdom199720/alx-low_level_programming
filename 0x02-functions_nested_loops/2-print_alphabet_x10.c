#include "main.h"

/**
 * print_alphabet_x10 - print 'abcdefghijk-z' x 10
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char alpha;
	int count;

	for (count = 1; count <= 10; count++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
