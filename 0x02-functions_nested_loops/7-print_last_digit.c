#include "main.h"

/**
 * print_last_digit - last digit function
 *
 * @i:an arguement
 *
 * Return:always 0 success
 *
 */
int print_last_digit(int i)
{
	int last_number;

	last_number = i % 10;

	if (last_number < 0)
	{
		last_number = last_number * -1;
	}
	_putchar(last_number + '0');
	return (last_number);
}
