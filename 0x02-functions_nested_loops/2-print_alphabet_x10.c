#include "main.h"

/**
 * main - print 'abcdefghijk-z' x 10
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char alpha;
	int j;

	for (j = 1; j <= 10; j++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
