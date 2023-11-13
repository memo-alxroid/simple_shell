#include "main.h"

/*
 * get_number_of_characters_read - reads the user input
 * and return number of characters read
 * 
 *@inputString: the string to be read
 *
 * Return: the number of charachters read
 *
 */



ssize_t get_number_of_characters_read(char **inputString)
{
	ssize_t numberOfCharacters = 0;
	size_t inputStringLength = 0;

	numberOfCharacters = getline(&(*inputString), &inputStringLength, stdin);
	if (numberOfCharacters == -1)
	{
		dprintf(2, "\nError in getline Function\n");
		return (-1);
	}
	return (numberOfCharacters);
}

