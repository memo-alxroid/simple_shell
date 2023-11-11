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

		if (execve(commandName, commandWithArguments, NULL) == -1)
		{
			printf("execve failed\n");
		};
	}
}
