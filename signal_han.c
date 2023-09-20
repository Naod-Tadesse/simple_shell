#include "main.h"

/**
 * signal_han - handles signal
 * @sig: the signale
 *
 */

void signal_han(int sig)
{
	int number = 3;
	(void)sig;
	write(1, "\n$ ", number);
}
