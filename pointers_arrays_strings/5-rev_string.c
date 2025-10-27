#include "main.h"
/**
 * rev_string - reverses a string in place
 * @s: pointer to the string to reverse
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, j;
	char tmp;

	while (s[i] != '\0')
		i++;

	j = i - 1;
	for (i = 0; i < j; i++, j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
