#include "main.h"
/**
 * _isalpha - function which return alphabet
 *
 * @c: c is anrguement
 *
 * return:always
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
