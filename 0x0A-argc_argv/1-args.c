#include <stdlib.h>
#include <stdio.h>


/**
 * main - Print the number of arguments passed
 * @argc: size of *argv
 * @argv: array of strings
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc - 1);

	return (0);
}
