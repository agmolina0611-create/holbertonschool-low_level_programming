#include <stdio.h>
#include <stdlib.h>

/**
 * is_number - checks if a string has only digit characters (0-9)
 * @s: string to check
 * Return: 1 if only digits and not empty, 0 otherwise
 */
static int is_number(const char *s)
{
	int i = 0;

	if (s[0] == '\0')
		return (0);

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - adds positive numbers given as arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 1 on error (non-digit symbol found)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
