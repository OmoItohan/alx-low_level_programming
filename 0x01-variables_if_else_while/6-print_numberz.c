#include <stdio.h>

/**
 * main - Prints numbers betwween 0 to 9
 *
 * Return: Always 0 for success
 */
int main(void)
{
	int digit;

	for (digit = 48; digit < 58; digit++)
		putchar(digit);
	putchar('\n');
	return (0);
}
