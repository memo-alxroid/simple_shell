#include "main.h"

/*
 * execute_command - executes the given command
 *
 * @commandWithArguments: the command and its arguments
 *
 * Return: void
 *
 */

void execute_command(char **commandWithArguments)
{
	char *commandName = NULL;

	if (commandWithArguments != NULL)
	{
		commandName = commandWithArguments[0];
		printf("commandName: %s\n", commandName);
		printf("commandWithArguments[0]: %s\n", commandWithArguments[0]);
		printf("commandWithArguments[1]: %s\n", commandWithArguments[1]);
	}
}
