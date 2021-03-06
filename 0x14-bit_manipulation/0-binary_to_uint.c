#include "holberton.h"

/**
 * binary_to_uint - converts a binary to unsigned int
 * @b: pointer to the string with the binary number
 * Return: returns the converted number of 0 if not successfully converted
 **/

unsigned int binary_to_uint(const char *b)
{
	int idx;
	unsigned int number = 0;

	if (!b)
		return (0);
	for (idx = 0; b[idx] != '\0'; idx++)
	{
		if (b[idx] != '0' && b[idx] != '1')
			return (0);
	}
	for (idx = 0; b[idx] != '\0'; idx++)
	{
		number <<= 1;
		if (b[idx] == '1')
			number += 1;
	}
	return (number);
}
