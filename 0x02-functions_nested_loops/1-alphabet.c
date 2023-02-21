#include "main.h"

/**
 * print_alphabet - a function which print an alphabet
 *
 * @ch: input characheter
 *
 * Returns:character value
 *
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
