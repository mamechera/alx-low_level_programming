#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry program
 *
 * posative number
 *
 * return 0
 */

int main(void) /*main function*/

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n",  n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n",  n);
	}
	else
	{
		printf("%d is zero\n",  n);
	}

	return (0);
}
