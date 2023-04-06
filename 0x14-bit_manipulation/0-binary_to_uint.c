#include "main.h"

/**
 * binary_to_uint - its fuction return binary
 *
 * @b: input arg
 *
 * Return:always success
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] == '0' || b[i] == '1')
	{
		count << = 1;
		count += b[i] - '0';
		i++;
	}
	return (count);
}
