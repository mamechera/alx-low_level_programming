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
	char chm;

	for (chm = 'a'; chm <= 'z'; chm++)
	{
		_putchar(chm);
	}
	_putchar('\n');
}
