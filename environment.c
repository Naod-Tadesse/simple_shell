#include <string.h>
#include "main.h"


/**
 * enviroment_print - this function displays environment variables
 * @arguments: argument
 * Return: nothing
 */

int enviroment_print(char **arguments)
{
	char **env = environ;

	(void)arguments;

	for (; *env != NULL; env++)
	{
		write(1, *env, _strlen(*env));
	}
	return (0);
}

