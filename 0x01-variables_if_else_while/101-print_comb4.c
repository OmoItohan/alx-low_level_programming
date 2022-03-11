#include <stdio.h>

/**
 * main - Prints numbers between 01 to 89 with commas and space
 *
 * Return: Always 0 for success
 */
int main(void)
{
int i;
	for (i = 48; i < 56; i++)
	{
		int j;

		for (j = i + 1; j < 57; j++)
		{
			int k;

			for (k = j + 1; k < 58; k++)
			{

				putchar(i);
				putchar(j);
				putchar(k);

				if (i == 55 && j == 56 && k == 57)
					continue;
				putchar(44);
				putchar(32);
			}
		}

	}
	putchar('\n');
	return (0);
}
