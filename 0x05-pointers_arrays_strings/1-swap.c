#include "main.h"

/**
 * swap_int - function which swap two intigers
 * @a:first arguiment
 * @b:second arguiment
 *
 * Return:always success
 *
 */
void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
