#include "holberton.h"
/**
 * _strchr - It takes two arguments
 * It locates a character in a string
 * @s: the string to find character
 * @c: character in a string
 * Return: returns pointer to first occurence of a sring
 */
char *_strchr(char *s, char c)
{
	char *ptr;
	int i;

	ptr = NULL;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			ptr = &s[i];
			break;
		}
	}
	return (ptr);
}
