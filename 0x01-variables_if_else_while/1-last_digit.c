#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return:Always 0 Sucess
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int last_number = n % 10;
	if (last_number > 5)
	{
		printf("Last digit of %d is %d and greater than 5\n",n,last_number);
	}
	else if (last_number 6 < && last_number > 0)
	{
		printf("Last digit of %d is %d and less than 6 not 0\n", n,last_number);
	}
	else
	{
		printf("Last digit of %d is 0\n", n);
	}
	return (0);
}
