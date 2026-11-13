
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: characters to match
 *
 * Return: number of matching bytes at the beginning of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int count;
	int found;

	i = 0;
	count = 0;

	while (s[i] != '\0')
	{
		found = 0;
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
			j++;
		}

		if (found == 0)
			break;

		count++;
		i++;
	}

	return (count);
}
