#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: pointer to the string to modify
 * Description: Word separators are space, tab, newline, ',', ';', '.',
 * '!', '?', '"', '(', ')', '{', and '}'.
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int i = 0, k;
	char seps[] = " \t\n,;.!?\"(){}";

	/* capitalize first character if it's lowercase */
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= ('a' - 'A');

	while (s[i] != '\0')
	{
		/* if s[i] is a separator, check next char */
		for (k = 0; seps[k] != '\0'; k++)
		{
			if (s[i] == seps[k])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= ('a' - 'A');
				break;
			}
		}
		i++;
	}
	return (s);
}
