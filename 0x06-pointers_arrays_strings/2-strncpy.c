#include "holberton.h"
/**
 * _strncpy - It takes 3 arguments
 * It copies a string
 * @dest: final destination
 * @src:string to be copied
 * @n: The maximum number of bytes to copied from src.
 * Return: returns dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int cpy;

	for (cpy = 0; cpy < n && src[cpy] != '\0'; cpy++)
	{
		dest[cpy] = src[cpy];
	}
	for ( ; cpy < n; cpy++)
	{
		dest[cpy] = '\0';
	}
	return (dest);
}
