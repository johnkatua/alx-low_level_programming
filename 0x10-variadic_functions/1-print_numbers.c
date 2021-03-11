#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - It print numbers followed by a new line
 * @separator: string to be printed between lines
 * @n: all numbers to be printed
 * Return: returns void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list val;
	int num;
	unsigned int i;

	va_start(val, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(val, int);
		printf("%d", num);

		if (i < n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(val);
}
