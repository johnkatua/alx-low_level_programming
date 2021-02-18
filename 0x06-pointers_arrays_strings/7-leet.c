#include "holberton.h"
/**
 * leet - It takes one argument
 * It encodes string into 1337
 * @str: The string to be encoded
 * Return: returns the encoded string
 */
char *leet(char *str)
{
	int a, b;

	char lt[5] = {'a', 'e', 'o', 't', 'l'};
	char ltEnc[5] = {'4', '3', '0', '7', '1'};

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; b < 5; b++)
		{
			if (str[a] == lt[b] || str[a] == (lt[b] - 32))
			{
				*(str + a) = ltEnc[b];
			}
		}
	}
	return (str);
}
