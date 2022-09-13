#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1
 */

int _putchar(char c);

/**
 * print_alphabet - print lowercase alphabet
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - print lowercase alphabet ten times
 */
void print_alphabet_x10(void);

/**
 * _islower - checks for lowercase
 * @c: character to check
 * Return: int
 */
int _islower(int c);

/**
 * _isalpha - checks for alphabet character
 * @c: character to check
 * Return: 1 if lower or uppercase, 0 if not alphabet character
 */
int _isalpha(int c);
#endif
