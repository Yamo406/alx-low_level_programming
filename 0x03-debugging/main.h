#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include "2-largest_number.c"
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
int largest_number(int a, int b, int c);

#endif /* MAIN_H */
