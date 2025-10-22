#include "main.h"
/**
 * _isupper - is a function that check uppercase char
 * @c: The parameter for the elaborate
 * Return: 1 if is upper, otherwise 0
 */
int _isupper(int c)
{
	if (c > 65 && c < 90)
	{
		return (1);
	}
	return (0);
}
