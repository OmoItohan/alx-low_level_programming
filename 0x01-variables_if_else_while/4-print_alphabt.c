#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase
 * except q and e followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;

	/* start from a */
	letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'q' || letter == 'e')
		{
			letter++;
			continue;
		}
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
