#include "holberton.h"
/**
 * string_toupper - It takes one parameter
 * It changes string from lowercase => uppercase
 * @a: pointer to string
 * Return: returns the string
 */
char *string_toupper(char *a)
{
	int b;

	for (b = 0; a[b] != '\0'; b++)
	{
		if (a[b] >= 'a' && a[b] <= 'z')
		{
			a[b] -= 32;
		}
	}
	return (a);
}
