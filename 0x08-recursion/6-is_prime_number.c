#include "holberton.h"
/**
 * prime_number - It takes two arguments
 * It checks  if a number is prime
 * @a: factor check
 * @b: possible prime number
 * Return: 1 if prime and 0 if not
 */
int prime_number(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	if (a > b / 2)
		return (1);
	else
		return (prime_number(a + 1, b));
}

/**
 * is_prime_number - It takes 1 argument
 * It states if a number is prime
 * @n: number to check
 * Return: 1 if prime and 0 if not
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_number(2, n));
}
