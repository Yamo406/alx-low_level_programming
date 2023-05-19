#include <stdio.h>
/**
 * main - print the alphabet
 * Return: always 0
 */
int main(void)
{
	for (int i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
