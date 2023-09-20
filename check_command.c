#include "main.h"
#define MAX_LEN 80

/**
 * check_command - check if given argument is command
 * @arguments: the arguments
 * @argv: argument from main
 * @state: pointer for status code
 *
 * Return: status code
 */
int check_command(char **arguments, char **argv, inform *state)
{
	command_type com[] = {{"env", enviroment_print}, {"exit", terminal_exit}, {NULL, NULL}};
	int i, ret_value;
	char *result, *pat, *cop, fullpath[MAX_LEN];
	struct stat buf;

	for (i = 0; com[i].command; i++)
	{
		if (_strcmp(arguments[0], com[i].command) == 0)
		{
			ret_value = com[i].fun(arguments, state, argv);
			return (ret_value);
		}

	}
	pat = getenv("PATH");
	cop = _strdup(pat);
	if (!cop && arguments[0][0] != '/')
	{
		write(2, argv[0], _strlen(argv[0]));
		write(2, ": 1: ", 5);
		write(2, arguments[0], _strlen(arguments[0]));
		write(2, ": not found\n", 12);
		state->status = 127;
	}
	else if (stat(arguments[0], &buf) == 0)
	{
		execute(arguments[0], arguments, argv, state);
	}
	else
	{
		result = find_exe(arguments[0], fullpath);
		if (result != NULL)
		{
			execute(result, arguments, argv, state);
		}
		else
		{
			write(2, argv[0], _strlen(argv[0]));
			write(2, ": 1: ", 5);
			write(2, arguments[0], _strlen(arguments[0]));
			write(2, ": not found\n", 12);
			state->status = 127;
		}
	}
	free(cop);
	return (state->status);
}

