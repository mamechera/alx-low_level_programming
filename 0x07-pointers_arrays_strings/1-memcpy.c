#include "main.h"

/**
 * _memcpy - copy memory
 * @dest:destined memory
 * @src:source location
 * @n:memory size
 *
 * Return:always
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; src[i] < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
