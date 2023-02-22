#include "main.h"

/**
 * print_alphabet -> prints the lowercase alphabets
 * Return:
 * @j:an arguiment
 */

void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
