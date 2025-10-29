#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: character code to check (ASCII)
 *
 * Return: 1 if c is lowercase letter, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
