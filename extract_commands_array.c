#include "main.h"

/*
 * extract_commands_array - extracts commands from user input
 *
 * Return: the commands array
 *
 */

char **extract_commands_array()
{
	char **commandsArray = NULL;
	char *inputString = NULL, *inputStringCopy = NULL; 
	ssize_t numberOfCharactersRead = 0;
	
	numberOfCharactersRead = get_number_of_characters_read(&inputString);
	if (numberOfCharactersRead == -1)
	{
		return (NULL);
	}
	inputStringCopy = copy_input_string(&inputString, numberOfCharactersRead);
	if (inputStringCopy == NULL)
	{
		free(inputStringCopy);
		return (NULL);
	}
	commandsArray = split_input_into_words(inputString, inputStringCopy);
	return (commandsArray);
}
