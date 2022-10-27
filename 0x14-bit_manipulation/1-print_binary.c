#include "main.h"

/**
 * print_binary - prints the binary representation of a numnber
 * @n: unsigned long, number to be represented in binary
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		prin_binary(n >> 1);

	_putchar((n & 1) + '0');
}
