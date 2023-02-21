#include "main.h"

/**
 * print_alphabet - a function which print an alphabet
 *
 * @l: input characheter
 *
 * Returns:character value
 */
void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
