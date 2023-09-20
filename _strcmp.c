#include "main.h"

/**
 * _strcmp - this function compares two strings
 * @string1: the first string
 * @string2: the second string
 *
 * Return: 0 if the strings are equal, other ways 1
 */

int _strcmp(char *string1, char *string2)
{
	int i = 0;

	while (string1[i] != '\0' && string2[i] != '\0')
	{
		if (string1[i] != string2[i])
			return (string1[i] - string2[i]);
		i++;
	}

	return (0);
}
