#include <stdio.h>
#include "main.h"

/**
 * main - contains the implementation of the function _isupper()
 * Return: Always 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
