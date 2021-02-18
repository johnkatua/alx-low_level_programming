#include "holberton.h"
/**
 * rot13 - It takes one argument
 * It encodes  a  string using rot13
 * @str: pointer to string to be encoded
 * Return: return str
 */
char *rot13(char *str)
{
	int a, b;

	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; b <= 51; b++)
		{
			if (s[b] == str[a])
				str[a] == s1[b];
		}
	}
	return (str);
}
