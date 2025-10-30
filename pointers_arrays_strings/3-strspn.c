#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to scan
 * @accept: set of accepted bytes
 * Return: number of bytes in the initial segment of @s
 * which consist only of bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j, hit;

	for (i = 0; s[i] != '\0'; i++)
	{
		hit = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				hit = 1;
				break;
			}
		}
		if (!hit)
			break;
		count++;
	}
	return (count);
}
