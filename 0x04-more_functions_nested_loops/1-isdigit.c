#include <stdio.h>
#include "main.h"

/**
 * main - contains the implementation of the function _isdigit()
 * Return: Always 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
