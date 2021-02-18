#include "holberton.h"
/**
 * _strncat - It takes 3 arguments
 * It concatenates two strings
 * @dest: The destination of string
 * @src: The string to be copied
 * @n: The number of bytes to be copied
 * Return: returns dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for  (a = 0; dest[a] != '\0'; a++)
	{
		for (b = 0; b < n && src[b] != '\0'; b++)
		{
			dest[a + b] = src[b];
		}
	}
	dest[a + b] = '\0';
	return (dest);
}
