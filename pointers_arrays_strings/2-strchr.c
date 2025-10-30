#include "main.h"
#include <stddef.h> /* for NULL */

/**
 * _strchr - locates first occurrence of a character in a string
 * @s: pointer to the string to search
 * @c: character to find
 * Return: pointer to first occurrence of @c in @s, or NULL if not found.
 * If @c is '\0', returns a pointer to the string's terminating null byte.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}

	if (c == '\0')
		return (&s[i]); /* point to the terminator */

	return (NULL);
}
