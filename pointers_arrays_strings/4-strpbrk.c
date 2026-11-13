
#include "main.h"

/**
 * _strpbrk - searches a string for any matching byte
 * @s: string to search
 * @accept: characters to search for
 *
 * Return: pointer to the first matching byte, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);

			j++;
		}

		i++;
	}

	return (0);
}
