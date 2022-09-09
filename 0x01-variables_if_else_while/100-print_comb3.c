#include <stdio.h>

/**
 * main - Entry point, print 00 to 99 using putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	int tenth;
	int unit;

	for (tenth = '0'; tenth <= '9'; tenth++)/*print tens place*/
	{
		for (unit = (tenth + 1); unit <= '9'; unit++)/*print units place*/
		{
			putchar(tenth);
			putchar(unit);

			if (tenth != '8' || unit != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
