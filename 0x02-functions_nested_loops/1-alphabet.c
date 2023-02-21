#include "main.h"

/**
 * print_alphabet - a function which print an alphabet
 *
 * @c: input characheter
 *
 * Returns:character value
 *
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
