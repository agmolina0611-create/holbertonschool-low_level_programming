#include "main.h"
/**
 * _strncpy - copies at most n bytes of src to dest
 * @dest: destination buffer
 * @src: source string
 * @n: maximum number of bytes to copy
 * Description: Copies up to n bytes from src to dest. If src is shorter
 * than n, the remainder of dest is padded with '\0'. If src is at least
 * n bytes long, no terminating null byte is added to dest.
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
