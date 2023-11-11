#include "main.h"

/*
 * get_input_string - gets the input from the user input
 *
 * @inputString: the string that will contain the input
 * @inputStringLength: the length of the input string
 *
 * Return: the number of charachters read
 *
 */



ssize_t get_input_string(char **inputString, size_t inputStringLength)
{
	ssize_t numberOfCharcters = 0;
	numberOfCharcters = getline(&(*inputString), &inputStringLength, stdin);
	if (numberOfCharcters == -1)
	{
		dprintf(2, "\nError in getline Function\n");
		return (-1);
	}
	return (numberOfCharcters);
}

