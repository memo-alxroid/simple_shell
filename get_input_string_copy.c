#include "main.h"

/*
 * copy_input_string - makes a copy of the input string
 *
 * @inputString: the input string
 *
 * Return: a copy of the inputString
 *
 */

char *copy_input_string(char **inputString)
{
	char *inputStringCopy;
	int stringLen = 0;

	stringLen = strlen(*inputString);

	inputStringCopy = malloc(sizeof(char) * stringLen);
	if (inputStringCopy == NULL)
	{
		return (NULL);
	}
	inputStringCopy = strcpy(inputStringCopy, *inputString);
	return (inputStringCopy);
}
