#include "main.h"

char *get_command_path(char *command)
{
	char *pathEnviromentVariable, *pathEnviromentVariableCopy;
	char *pathEnviromentVariableToken, *commandFullPath;
	struct stat buffer;

	pathEnviromentVariable = getenv("PATH");
	if (pathEnviromentVariable != NULL)
	{
		pathEnviromentVariableCopy = strdup(pathEnviromentVariable);
		pathEnviromentVariableToken = strtok(pathEnviromentVariableCopy, ":");
		while (pathEnviromentVariableToken != NULL)
		{
			commandFullPath = generate_command_path(pathEnviromentVariableToken, command, &commandFullPath);
			if (check_if_path_exist(commandFullPath, buffer))
			{
				free(pathEnviromentVariableCopy);
				return (commandFullPath);
			}
			else
			{
				free(commandFullPath);
				pathEnviromentVariableToken = strtok(NULL, ":");
			}
		}
		free(pathEnviromentVariableCopy);

		if (check_if_path_exist(command, buffer))
		{
			return (command);
		}
		else
		{
			return (NULL);
		}
	}
	return (NULL);
}
