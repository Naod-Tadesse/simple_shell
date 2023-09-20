#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts string to integer
 * @string: pointer to string
 *
 * Return: integer
 */
int _atoi(char *string)
{
	unsigned long int num = 0;
	int i = 0;

	if (string[0] != '+')
	{
	}
	else
	{
		string++;
	}
	while (string[i] != '\0')
	{
		if (string[i] >= '0' && string[i] <= '9')
		{
			num = num * 10 + (string[i] - '0');
			if (num > INT_MAX)
			{
				return (-1);
			}
			i++;
		}
	return (num);
}
