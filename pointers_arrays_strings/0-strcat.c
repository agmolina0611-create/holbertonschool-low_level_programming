#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination buffer; must have enough space
 * @src:  source string to append
 * Description: Appends src to dest, overwriting dest's terminating
 * null byte, then adds a new terminating null byte.
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	/* move i to end of dest */
	while (dest[i] != '\0')
		i++;

	/* copy src (including its '\0') to the end of dest */
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';

	return (dest);
}
