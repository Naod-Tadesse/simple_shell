#include "main.h"

/**
 * find_exe - find the path for given exectable argument
 * @executable: the executable given
 * @fullpath: the fullname for executable
 */
char *find_exe(char *executable, char *fullpath)
{
	char *path, *copy, *token;
	struct stat store;

	if (executable == NULL || *executable == '\0')
	{
		return (NULL);
	}
	path = getenv("PATH");
	if (path == NULL)
	{
		return (NULL);
	}
	copy = _strdup(path);
	if (copy == NULL)
	{
		return (NULL);
	}
	token = _strtok(copy, ":");

	free(copy);
	return (NULL);
}
