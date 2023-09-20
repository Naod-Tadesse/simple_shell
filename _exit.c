#include "main.h"

/**
 * terminal_exit - exits terminal
 * @arguments: arguments
 * @state:structure 
 * @argv: argv
 * Return: status code 
 */
int terminal_exit(char **arguments, inform *state, char **argv)
{
	int i = 0, exit_status = 0;

	while (arguments[i] != NULL)
	{
		i++;
	}

	if (arguments[1])
	{
		exit_status = _atoi(arguments[i]);
		if (exit_status = -1)
		{
			write(2, argv[0], _strlen(argv[0]));
			write(2, ": 1: ", 5);
			write(2, arguments[0], _strlen(arguments[0]));
			write(2, ": 1: ", 5);
			return (1);
		}
	}	
	return (-3);
}	
