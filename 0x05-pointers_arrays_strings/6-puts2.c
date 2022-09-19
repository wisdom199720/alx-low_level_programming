#include "main.h"

/**
 * _stlern - returns the length of string
 * @s: string
 * Return: length
 */

int _stlern(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * puts2 - puts evers second character of a string
 * @str: string to print
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[1] != '\0' && i < _strlen(str); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
