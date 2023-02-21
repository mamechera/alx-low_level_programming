#include "main.h"

/**
 * print_alphabet - a function which print an alphabet
 *
 * @chm: input characheter
 *
 * Returns:character value
 *
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');

}
