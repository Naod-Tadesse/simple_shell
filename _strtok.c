#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strtok - tokenizes a string
 * @str: string to tokenize
 * @delimiters: set of delimiters to tokenize with
 * Return: token
 */

char *_strtok(char *str, const char *delimiters)
{
	static char *final_string;
	char *first_token;

	if (str != NULL)
	{
		final_string = str;
	}

	if (final_string == NULL || *final_string == '\0')
	{
		return (NULL);
	}

	while (*final_string != '\0' && strchr(delimiters, *final_string) != NULL)
	{
		final_string++;
	}

	if (*final_string == '\0')
	{
		return (NULL);
	}

	first_token = final_string;

	while (*final_string != '\0' && strchr(delimiters, *final_string) == NULL)
	{
		final_string++;
	}

	if (*final_string != '\0')
	{
		*final_string = '\0';
		final_string++;
	}

	return (first_token);
}
