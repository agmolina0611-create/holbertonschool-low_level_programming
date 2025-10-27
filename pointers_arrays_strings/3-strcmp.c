#include "main.h"
/**
 * _strcmp - compares two strings like strcmp
 * @s1: first string
 * @s2: second string
 * Return: an integer less than, equal to, or greater than zero if s1 is
 * found to be less than, to match, or be greater than s2.
 * (Specifically: first differing byte s1[i]-s2[i], or 0 if equal)
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	/* If we got here, at least one reached '\0' */
	return (s1[i] - s2[i]);
}
