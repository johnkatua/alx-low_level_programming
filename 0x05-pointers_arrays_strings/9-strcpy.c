#include "holberton.h"
/**
 * *_strcpy - It takes 2 arguments
 * It copies a string to other to a buffer pointer
 * @dest: where the string is copied
 * @src: string to be copied
 * Return: returns pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (*(src + a))
	{
		*(dest + a) = *(src + a);
		a++;
	}
	*(dest + a) = '\0';
	return (dest);
}
