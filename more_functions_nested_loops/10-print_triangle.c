#include "main.h"
/**
 * print_triangle - prints a right-aligned triangle of '#' characters
 * @size: if size is 0 or less, the function should print only a new line
 * Return: void
 */
void print_triangle(int size)
{
	int row, sp, hash;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		for (sp = 0; sp < size - row; sp++)
			_putchar(' ');
		for (hash = 0; hash < row; hash++)
			_putchar('#');
		_putchar('\n');
	}
}
