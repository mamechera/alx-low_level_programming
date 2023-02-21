#include "main.h"

/**
 * _abs - function for absolute
 *
 * Return:always 0 success
 *
 */
int _abs(int)
{
	int m;

	if (m < 0)
	{
		int absolute_value;
		absolute_value = m * -1;
		return (absolute_value);
	}
	return (m);
}
