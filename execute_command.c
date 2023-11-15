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
	char *commandName = NULL, *commandPath = NULL;

	if (commandWithArguments)
	{
		commandName = commandWithArguments[0];
		commandPath = get_command_path(commandName);

		if((execve(commandPath, commandWithArguments, NULL)) == -1)
		{
			perror("Erorr:");
		};
	}
}
