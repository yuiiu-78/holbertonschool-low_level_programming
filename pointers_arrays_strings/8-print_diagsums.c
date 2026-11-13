
#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: pointer to the matrix
 * @size: size of the square matrix
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	int primary;
	int secondary;

	primary = 0;
	secondary = 0;

	for (i = 0; i < size; i++)
	{
		primary += a[i * size + i];
		secondary += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", primary, secondary);
}
