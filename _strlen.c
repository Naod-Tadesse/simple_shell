#include "main.h"

/**
 * _strlen - calculates the length of string
 * @string: the string taken
 * Return: the length of the string received
 */

int _strlen(char *string)
{
	int i = 0;

	while (string[i] != '\0')
	{
		i++;
	}

	return (i);
}
