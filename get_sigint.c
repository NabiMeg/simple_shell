#include "main.h"

/**
 * get_sigint - Handle the crtl + c call in prompt
 * @sig: Signal handler
 */
void get_sigint(int sig)
{
	(void)sig;
	printf("\n");
	write(STDOUT_FILENO, "\n^-^ ", 5);
}
