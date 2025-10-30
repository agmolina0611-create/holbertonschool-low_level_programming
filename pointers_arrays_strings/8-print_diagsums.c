#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals
 *                  of a square matrix of integers
 * @a: pointer to the first element of the matrix (row-major)
 * @size: matrix dimension (size x size)
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	long int d1 = 0;
	long int d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += a[i * size + i];
		d2 += a[i * size + (size - 1 - i)];
	}
	printf("%1d, %1d\n", d1, d2);
}
