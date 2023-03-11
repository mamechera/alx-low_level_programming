#include "main.h"

/**
 * _islower - function which return lower number
 * @c: an input argeument
 * Return:Always success
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
