#include "main.h"

/**
 * print_line - print line function
 *
 * Return: always 0;
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n + 1; i++)
	{
		if (n >= 0)
		{
			_putchar(10);
			continue;
		}
		_putchar(95);
		_putchar(10);
	}
}
