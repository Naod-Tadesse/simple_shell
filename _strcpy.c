#include "main.h"

/**
 * _strcpy - copies string
 * @destination: copied string
 * @source: string to copy
 *
 */

void _strcpy(char *destination, char *source)
{
	int length = 0, counter = 0;

	while (source[length] != '\0')
	{
		length++;
	}

	while (counter < length)
	{
		destination[counter] = source[counter];
		counter++;
	}
	destination[counter] = '\0';

}
