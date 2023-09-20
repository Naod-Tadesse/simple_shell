#include "main.h"

/**
 * interactive - check for interactive
 *
 * Return: 1 or 0.
 */
int interactive(void)
{
	return (isatty(STDIN_FILENO));
}
