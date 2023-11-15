#include "main.h"

char *generate_command_path(char *pathEnviromentVariableToken, char*command, char**commandFullPath)
{
	size_t commandLength, directoryLength;

	commandLength = strlen(command);
	directoryLength = strlen(pathEnviromentVariableToken);

	*commandFullPath = malloc(commandLength + directoryLength + 2);
	if (commandFullPath == NULL)
	{
		return (NULL);
	}

	strcpy(*commandFullPath, pathEnviromentVariableToken);
	strcat(*commandFullPath, "/");
	strcat(*commandFullPath, command);
	strcat(*commandFullPath, "\0");

	return (*commandFullPath);

}
