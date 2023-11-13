#include "main.h"

/*
 * copy_input_string - makes a copy of the input string
 *
 * @inputString: the input string
 *
 * Return: a copy of the inputString
 *
 */

char *copy_input_string(char **inputString, ssize_t numberOfCharacters)
{
	char *inputStringCopy;

	inputStringCopy = malloc(sizeof(char) * numberOfCharacters);
	if (inputStringCopy == NULL)
	{
		return (NULL);
	}
	strcpy(inputStringCopy, *inputString);
	return (inputStringCopy);
}
