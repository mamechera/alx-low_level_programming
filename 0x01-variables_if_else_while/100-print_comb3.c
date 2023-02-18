#include <stdio.h>

/**
 * main - Entry point
 *
 * Return:Always 0 Success
 *
 */
#include <stdio.h>

int main(void)
{
	int ch;
	int i;

	for (ch = 48; ch < 57; ch++ )
	
	{
	
        for (i = 49; i < 58; i++)
        {
        	if (ch == i || ch >= i)
		{
		
                	continue;
		
            	}
            if (ch !=57 || i != 58)
	    {
                putchar(ch);
                putchar(i);
                if (i!=57 || ch != 56)
                {
                    putchar(',');
                }
                putchar(' ');

            }

        }
    }


    return 0;
}
