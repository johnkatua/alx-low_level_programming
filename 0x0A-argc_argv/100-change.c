#include <stdio.h>
#include <stdlib.h>
/**
 * main - It takes 2 arguments
 * It prints minimum numbers of coins to changes of an amount
 * @argc: number of arguments passed in a function
 * @argv: pointer to array of strings
 * Return: returns 0 if successfully else return 1
 */
int main(int argc, char *argv[])
{
	int a, b = 0, c, d;
	int arr[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		puts("0");
		return (1);
	}
	else
	{
		for (c = 0; c < 5; c++)
		{
			d = a / arr[c];
			a -= d * arr[c];
			b += d;
			if (a == 0)
				break;
		}
	}
	printf("%d\n", b);
	return (0);
}
