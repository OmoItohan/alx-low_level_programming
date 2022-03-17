#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Prints if number is positive, zero or negative
 *
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{

	srand(time(0));
	i = rand() - RAND_MAX / 2;

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
}
