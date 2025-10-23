#include "main.h"
/**
 * print_line - if n is 0 or less, the function should only print `:wq\n
 * @n: Where 'n' is the number of time the character '_' should be printed
 * Return void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
