#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - It prints a string followed by new line
 * @separator: string to be printed between string
 * @n: number of strings passed to a function
 * Return: returns void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;
	char *str;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(string, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
