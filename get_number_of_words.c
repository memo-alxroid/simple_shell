#include "main.h"

/*
 * get_number_of_words - gets the number of words in the input string
 *
 * @word: array of words
 * @inputString: the input string
 *
 * Return: the number of words in the input String
 *
 */


int get_number_of_words(char **word, char **inputString)
{
	int numberOfWords = 0;

	*word = strtok(*inputString, " ");

	while (*word != NULL)
	{
		numberOfWords++;
		*word = strtok(NULL, " ");
	}
	return (numberOfWords);

}


