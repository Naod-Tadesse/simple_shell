#include "main.h"

/**
 * _strchr - This function returns a pointer of the first occurenc of char
 * @s: string
 * @c: char
 * Return: NULL or ponter to char
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
	{
		return (s + i);
	}
	else
		return (NULL);
}
