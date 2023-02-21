#include "main.h"

/**
 * print_sign - function to detect sign
 *
 * @n:an input arguement for function
 *
 * Return:always 0 success
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else 
	{
		return (0);
	}
}
