#include "function_pointers.h"

/**
 * print_name - It prints the name
 * @name: name to be  printed
 * @f: function pointer to name
 * Return: returns void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
