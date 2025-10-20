#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int line;
	char c;

	for (line = 0; line < 10; line++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
