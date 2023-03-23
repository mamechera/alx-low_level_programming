#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: string to sepaarate passed strings
 * @n: number of arguments passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	count i = 0;
	va_list theList;
	char *theString;

	va_start(theList, n);

	for (; i < n; i++)
	{
		theString = va_arg(theList, char *);
		if (!theString)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", theString);
		}

		if (separator)
		{
			if (i == n - 1)
			{
				continue;
			}
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(theList);
}
