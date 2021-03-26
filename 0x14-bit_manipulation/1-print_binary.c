#include "holberton.h"

/**
 * pow - It calculates base to power
 * @base: base of a number
 * @power: power of a number
 * Return: returns base to power
 */

unsigned long int pow(unsigned int base, unsigned int power)
{
	unsigned long int number = 1;
	unsigned int val;

	for (val = 1; val <= power; val++)
	{
		number *= base;
	}
	return (number);
}

/**
 * print_binary - prints a binary to represent a number
 * @n: number to be printed
 * Return: returns void
 */

void print_binary(unsigned long int n)
{
	unsigned long int a, b;
	char j = 0;

	a = pow(2, sizeof(unsigned long int) * 8 - 1);
	while (a != 0)
	{
		b = n & a;
		if (b == a)
		{
			j = 1;
			_putchar('1');
		}
		else if (j == 1 || a == 1)
		{
			_putchar('0');
		}
		a >>= 1;
	}
}
