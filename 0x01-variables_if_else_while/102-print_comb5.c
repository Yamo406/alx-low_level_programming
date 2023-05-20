#include <stdio.h>
/**
 * main - function
 * Return: always blue
 */
int main(void)
{
	int i, j, k, l;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (l = 48; l <= 57; l++)
				{
				if ((i + j) > (k + l) || (i + j) == (k + l))
				{
					continue;
				}
				putchar(i);
				putchar(j);
				putchar(32);
				putchar(k);
				putchar(l);
				if (i == 57 && j == 56 && k == 57 && l == 57)
				{
					continue;
				}
				putchar(44);
				putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
