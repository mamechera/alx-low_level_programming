#include "main.h"

/**
 * factorial - return factorial function
 *
 * @n:an arguiment
 *
 * Return:always success
 *
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
