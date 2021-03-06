#include <stdio.h>
#include "holberton.h"
/**
 * main - prints the sum of the even-valued terms
 * Return: 0
 */
int main(void)
{
	long int v1 = 1, v2 = 2, sum = v2, tmp;

	while (v2 < 4000000)
	{
		tmp = v1 + v2;
		v1 = v2;
		v2 = tmp;
		sum += (v2 % 2 == 0) ? v2 : 0;
	}
	printf("%li\n", sum);
	return (0);
}
