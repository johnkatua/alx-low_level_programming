#include "holberton.h"
/**
 * cap_string - capitalize string words
 * @s: first parameter
 *
 * Description: Begining of every word
 * Return: Always(0) Success
 */
char *cap_string(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		if ((s[0] >= 'a') && (s[0] <= 'z'))
		{
			s[0] = s[0] - 32;
		}
		if ((s[x] == ' ') || (s[x] == '\t') || (s[x] == '\n')
		    || (s[x] == ',') || (s[x] == ';') || (s[x] == '.')
		    || (s[x] == '!') || (s[x] == '?') || (s[x] == '"')
		    || (s[x] == '(') || (s[x] == ')') || (s[x] == '{')
		    || (s[x] == '}'))
		{
			if ((s[x + 1] >= 'a') && (s[x + 1] <= 'z'))
			{
				s[x + 1] = (s[x + 1] - 32);
				continue;
			}
		}
		x++;
	}
	return (s);
}
