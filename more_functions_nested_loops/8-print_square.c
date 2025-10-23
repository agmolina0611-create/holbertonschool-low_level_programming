#include "main.h"
/**
 * print_square - Where size is the size of square
 * @size: if size is 0 or less, the function should print only a new line
 * Return: void
 */
void print_square(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
			_putchar('#');
		_putchar('\n');
	}
}
