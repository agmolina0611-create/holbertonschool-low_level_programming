#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to the first element of the matrix (row-major)
 * @size: dimension of the matrix (size x size)
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int d1 = 0;
	int d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += a[i * size + i];
		d2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", d1, d2);
}
