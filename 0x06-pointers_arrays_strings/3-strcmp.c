#include "main.h"

/**
 * _strcmp - string compare function
 * @s1:first input string
 * @s2:second input string
 *
 * Returns:always success
 *
 */
int _strcmp(char *s1, char *s2)
{
	if (s1[0] && s2[0] != 0)
	{
	return (s1[0] - s2[0]);
	}
	else
	{
	return (0);
	}
}	
