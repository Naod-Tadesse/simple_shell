#include "main.h"

/**
 * _strcat - concatenates two strings
 * @destination: destination string
 * @src: source string to concatenate into destination
 *
 */

void _strcat(char *destination, const char *src)
{
	int len = 0, i = 0;

	while (destination[len] != '\0')
	{
		len++;
	}

	while (src[i] != '\0')
	{
		destination[len] = src[i];
		i++;
		len++;
	}
	destination[len] = '\0';
}
