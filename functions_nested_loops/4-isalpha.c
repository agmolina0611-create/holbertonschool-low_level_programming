#include "main.h"

/**
 * _isalpha - checks if a character code is alphabetic (A–Z or a–z)
 * @c: ASCII code of the character to check
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
