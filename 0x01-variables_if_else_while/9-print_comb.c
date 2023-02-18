#include <stdio.h>

/**
 * main - Entry point
 *
 * Return:Always 0 Success
 *
 */
int main(void)
{
	int ch;

	for (ch = 48; ch < 57; ch++)
	{
		putchar(ch);
		putchar(',');
		putchar(' ');
	}
	putchar(ch = 57);
	return (0);
}
