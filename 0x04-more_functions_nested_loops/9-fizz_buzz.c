#include <stdio.h>
/**
 * main - It takes no arguments
 * prints the numbers from 1 to 100
 *
 * Return: returns void
 */
int main(void)
{
	int num;

	for (num = 0; num <= 100; num++)
	{
		if (num  == 0)
		{
			printf("Buzz");
			break;
		}
		else if (num % 3 == 0 && num % 5 != 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (num % 5 == 0 && num % 3 != 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else
		{
			printf("%d", num);
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
