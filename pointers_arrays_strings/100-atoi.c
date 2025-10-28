#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer (like atoi)
 * @s: pointer to the string
 *
 * Description:
 * - Skips any leading non-digits while counting all preceding '+'/'-' signs.
 * - Each '-' flips the sign.
 * - Parses the first contiguous digit run.
 * - Clamps on overflow to INT_MAX / INT_MIN.
 * - Returns 0 if no digits are found.
 *
 * Return: the converted int value (clamped on overflow)
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, started = 0;
	int result = 0;

	while (s[i] != '\0')
	{
		if (!started)
		{
			if (s[i] == '-')
			{
				sign = -sign;
				i++;
				continue;
			}
			if (s[i] == '+')
			{
				i++;
				continue;
			}
			if (s[i] >= '0' && s[i] <= '9')
				started = 1;
			else
			{
				i++;
				continue;
			}
		}

		/* digit parsing */
		if (s[i] >= '0' && s[i] <= '9')
		{
			int d = s[i] - '0';

			/* overflow check before result = result * 10 + d */
			if (result > (INT_MAX - d) / 10)
				return (sign == 1 ? INT_MAX : INT_MIN);

			result = result * 10 + d;
			i++;
			continue;
		}

		/* non-digit after digits: stop */
		break;
	}

	if (!started)
		return (0);

	return (sign == 1 ? result : -result);
}
