#include <stdio.h>

/**
 * main - Prints single digit numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	number = 0;
	while (number <= 9)
	{
		putchar(number + '0');
		number++;
	}
	putchar('\n');

	return (0);
}
