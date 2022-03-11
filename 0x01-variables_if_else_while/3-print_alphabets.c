#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 for success
 */
int main(void)
{
	int letter;

	/* print alphabet in lowercase */
	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	/* Print alphabet in uppercase */
	letter = 'A';
	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
