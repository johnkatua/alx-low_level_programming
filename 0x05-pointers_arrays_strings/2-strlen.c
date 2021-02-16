#include "holberton.h"
/**
 * _strlen - It takes one argument
 *@s: pointer on whose string lenght is to be found
 *Return: return len
 */
int _strlen(char *s)
{
	int len;

	while (*(s + len))
	{
		len++;
	}
	return (len);
}
