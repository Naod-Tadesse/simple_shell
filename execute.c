#include "main.h"

/**
 * execute - executes command
 * @command: the command to execute
 * @arguments: commands and argumnets
 * @argv: command line argument from main
 * @state: pointer to status code
 *
 */
void execute(char *command, char **arguments, char **argv, inform *state)
{
	pid_t child;
	int val;

	(void)argv;

	child = fork();

	if (child < 0)
	{
		perror("child error");
	}
	else if (child == 0)
	{
		val = execve(command, arguments, environ);
		if (val == -1)
		{
			perror("error");
			exit(1);
		}
	}
	else
	{
		wait(&(state->status));
		if (WIFEXITED(state->status))
		{
			state->status = WEXITSTATUS(state->status);
		}
	}
}
