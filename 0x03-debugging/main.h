#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
int largest_number(int a, int b, int c);
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
#endif /* MAIN_H */
