#include "main.h"

/**
 * print_most_numbers - it print more numbers
 *
 * Return:always success
 *
 */
void print_most_numbers(void)
{
	char ch;

	for (ch = 0; ch <= 57; ch++)
	{
		if (ch != 50 && ch != 52)
		{
			_putchar(ch);
		}
	}
	_putchar('\n');
}
