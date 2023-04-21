#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	char *str;
	va_list args;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(args, n);
	str = va_arg(args, char *);

	for (index = 0; index < n; index++)
	{
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		str = va_arg(args, char *);

		if (index != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
