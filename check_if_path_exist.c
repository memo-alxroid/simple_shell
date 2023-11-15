#include "main.h"

int check_if_path_exist(char *path, struct stat buffer)
{
	if (stat(path, &buffer) == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
