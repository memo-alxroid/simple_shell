#include "main.h"


int main(int argc, char *argv[])
{
	char **commandsArray;

	(void)argc;

	if(fork() == 0 )
	{
		printf("inside child");
		execve("usr/bin/clear", argv, NULL);
	}
	else
	{
		printf("inside parent");
		wait(NULL);
	}

	while (1)
	{
		printf("#cisfun$ ");
		fflush(stdout);
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
