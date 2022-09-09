#include <stdio.h>

/**
 * main - print lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z') /*print lowercase a-z*/
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z') /*prints uppercase A-Z*/
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');

	return (0);
}
