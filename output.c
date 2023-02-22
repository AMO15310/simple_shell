#include "shell.h"
/**
 *  _prerror - Print Custom Errors
 * @argv:Name of program
 * @c:Error Count
 * @cmd:Command
 * Return: Void
 */
void _prerror(char **argv, int c, char **cmd)
{
	char *s = _itoa(c);

	PRINTER(argv[0]);
	PRINTER(": ");
	PRINTER(s);
	PRINTER(": ");
	PRINTER(cmd[0]);
	PRINTER(": Illegal number: ");
	PRINTER(cmd[1]);
	PRINTER("\n");
	free(s);
}

