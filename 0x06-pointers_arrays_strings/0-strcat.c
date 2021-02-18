#include "holberton.h"
/**
 * _strcat - It takes 2 arguments
 * It concetenates 2 strings
 * @dest: Where the string is copied to
 * @src: source string
 * Return: returns dest
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
		for (b = 0; src[b] != '\0'; b++)
		{
			dest[a] = src[b];
			a++;
		}
	}
	dest[a] = '\0';
	return (dest);
}
