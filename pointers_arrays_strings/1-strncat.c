#include "main.h"
/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: destination buffer; must have enough space
 * @src: source string
 * @n: maximum number of bytes from src to append
 * Description: Appends up to n bytes from src to dest. If src has
 * at least n bytes, it does not need to be null-terminated. A final
 * null byte is always written at the end of dest.
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	/* find end of dest */
	while (dest[i] != '\0')
		i++;

	/* copy at most n bytes from src */
	while (j < n && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}

	/* always null-terminate dest */
	dest[i + j] = '\0';

	return (dest);
}
