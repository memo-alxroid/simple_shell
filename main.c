#include "main.h"


int main()
{
	char **commandsArray;

	while (1)
	{
		printf("#cisfun$ ");
		commandsArray = extract_commands_array();
		if (commandsArray == NULL)
		{
			free(commandsArray);
			return (-1);
		}
		execute_command(commandsArray);
	}
	return (0);
}
