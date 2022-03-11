#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 for success
 */
int main(void)
{
	int i, j, k, l;

	i = 48;
	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			k = i;
			while (k < 58)
			{
				if (i == k)
					l = j + 1;
				else
					l = 48;
				while (l < 58)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i == 57 && j == 56 && k == 57 && l == 57)
						break;
					putchar(',');
					putchar(' ');
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}

