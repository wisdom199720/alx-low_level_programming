#include "main.h"


/**
 * main - entry point
 *
 * Return: Always return 0 (success)
 */

int main(void)
{

	char alpha;
	
	alpha = 'a';

	while (alpha < 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
	return (0);
}
