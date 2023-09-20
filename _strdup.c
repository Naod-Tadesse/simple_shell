#include "main.h"

/**
 * _strdup - allocates memory and copy string into new variable
 * @string: string to copy
 * Return: the copied string
 */

char *_strdup(char *string)
{
	int length = 0, i = 0;
	char *new_string;

	if (string == NULL)
	{
		return (NULL);
	}
	while (string[length] != '\0')
	{
		length++;
	}
	new_string = (char *)malloc(length + 1);

	if (new_string == NULL)
	{
		return (NULL);
	}

	while (i < length)
	{
		new_string[i] = string[i];
		i++;
	}

	new_string[length] = '\0';
	return (new_string);
}
