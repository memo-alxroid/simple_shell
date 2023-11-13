#include "main.h"

char **split_input_into_words(char *inputString, char *inputStringCopy)
{
	char **arrayOfWords = NULL;
	int numberOfWords = 0;
	char *word = NULL;
	numberOfWords = get_number_of_words(inputString, &word);
	arrayOfWords = store_words_in_array(inputStringCopy, &word, numberOfWords);
	return (arrayOfWords);

}











