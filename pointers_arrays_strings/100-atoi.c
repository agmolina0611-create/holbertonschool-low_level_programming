/* 100-atoi.c */
#include "main.h"
#include <limits.h>
/**
 * _atoi - converts a string to int (like atoi)
 * @s: input string
 * Return: converted value (clamped on overflow), or 0 if no digits
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int res = 0;

	/* skip non-digits; each '-' flips sign, '+' is ignored */
	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
		{
			sign = -sign;
		}
		i++;
	}

	/* parse the first digit run */
	while (s[i] >= '0' && s[i] <= '9')
	{
		int d = s[i] - '0';

		if (sign == 1)
		{
			if (res > (INT_MAX - d) / 10)
			{
				return (INT_MAX);
			}
			res = (res * 10) + d;
		}
		else
		{
			/* build as negative to safely reach INT_MIN */
			if (res < (INT_MIN + d) / 10)
			{
				return (INT_MIN);
			}
			res = (res * 10) - d;
		}
		i++;
	}

	return (res);
}
