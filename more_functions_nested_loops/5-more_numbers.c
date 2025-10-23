#include "main.h"

/**
 * more_numberes - prints 10 times the numbers, from 0 to 10.
 * Result: void
 */
void more_numberes(void)
{
	int line, n;

	for (line = 0; line < 10; line++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar('1');
			_putchar('0' + (n % 10));
		}
		_putchar('\n');
	}
}
