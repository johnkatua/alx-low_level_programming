#include <stdio.h>

/**
* main - Prints various type sizes based on the computer used to compile code
*
* Returns: 0 incase it runs into some errors or no data provided
*/
int main(void)
{
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of float: %lu byte(s)\n", sizeof(float));
	printf("Size of long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %lu byte(s)\n", sizeof(long long int));
	return (0);
}
