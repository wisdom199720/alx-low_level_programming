#include <stdio.h>

/**
 * main - using putchar to print numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int n = '0';

	while (n <= '9')
	{
		putchar (n);
		n++;
	}

	putchar ('\n');

	return (0);
}
