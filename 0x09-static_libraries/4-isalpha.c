#include "main.h"
/**
 * _isalpha - function which return alphabet
 *
 * @c: c is anrguement
 *
 * Return:Always 0 success
 *
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	return (0);
}
