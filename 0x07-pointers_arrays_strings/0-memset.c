#include "main.h"

/**
 * _memset - memory assign function
 * @s:input charchater
 * @b:assign char
 * @n:memory size
 *
 * Return:always success
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	for (i = 0; i < n; i++)
	{
		_putchar(s[i]);
	}
}
