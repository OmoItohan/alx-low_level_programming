#include<stdio.h>
/**
 * main- main Entry Point
 *
 * Description: Prints "The size of various types based on the computer "
 *
 * Return: main Always 0
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of an long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of an float: %zu byte(s)\n", sizeof(float));
	printf("Size of an long long int: %zu byte(s)\n", sizeof(long long int));
	return (0);
}
