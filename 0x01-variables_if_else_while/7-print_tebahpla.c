#include <stdio.h>
/**
 * main - print the alphabet
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 122; i <= 97; i--)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
