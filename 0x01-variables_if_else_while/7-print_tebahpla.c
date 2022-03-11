#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse order
 *
 * Return: Always 0 for success
 */
int main(void)
{
	int letter:

	/* prints alphabet in lowercase */
	letter = 'z'
	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n')
	return (0);
}
