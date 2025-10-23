#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: if 'n' is 0 or less, the function should only print a \n
 * Return: void
 */
void print_diagonal(int n)
{
	int line, s;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (line = 0; line < n; line++)
	{
		for (s = 0; s < line; s++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
