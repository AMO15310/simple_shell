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
	char *er;

	PRINTER(argv[0]);
	PRINTER(": ");
	er = _itoa(counter);
	PRINTER(er);
	free(er);
	PRINTER(": ");
	PRINTER(input);
	PRINTER(": not found\n");
}

