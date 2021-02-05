#include <stdio.h>
/**
 *main-Program entry point.
 *Return:0-success, Non-zero, fail.
 */
int main(void)
{
	int i, j, k, m;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (m = '1'; m <= '9'; m++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(m);
					if (i == '9' && j == '9' && k == '9' && m == '9')
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);

}
