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
	int i;

	for (ch = 48; ch < 57; ch++ )
	{
		for (i = 49; i < 58; i++)
		{
			if (i != ch)
			{
				putchar(ch);
				putchar(i);
				if (ch == 56 && i == 57)
				{
					continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
		putchar('\n');
		
	}
	return (0);
}
