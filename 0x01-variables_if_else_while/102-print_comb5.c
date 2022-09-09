#include <stdio.h>
/**
 * main - print a num pair from 00-99 but no repeats (00 01, 00 02, 00 03,...)
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ten;
	int unit;
	int te;
	int un;

	for (ten = '0'; ten <= '9'; ten++)
	{
		for (unit = '0'; unit <= '9'; unit++)
		{
			for (te = ten + 1; te <= '9'; te++)
			{
				for (un = unit + 1; un <= '9'; un++)
				{
					putchar(ten);
					putchar(unit);
					putchar(' ');
					putchar(te);
					putchar(un);

					if (!((ten == '9' && unit == '8') && (te == '9' && un == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				un = '0';
			}
		}
	}
	putchar('\n');

	return (0);
}
