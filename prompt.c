#include "shell.h"

/**
 * prompt - Display Shell Prompt.
 */
void prompt(void)
{
	PRINTER("$ ");
}
/**
 * print_error - Display Error Based on Command and How Many Time Shell Looped
 * @input: user Input
 * @counter: Simple Shell Count Loop
 * @argv: program name
 * Return: Void
 */
void print_error(char *input, int counter, char **argv)
{
	char *s;

	PRINTER(argv[0]);
	PRINTER(": ");
	s = _itoa(counter);
	PRINTER(er);
	free(er);
	PRINTER(": ");
	PRINTER(input);
	PRINTER(": not found\n");
}

