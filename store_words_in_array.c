#include "main.h"

char **store_words_in_array(char *inputStringCopy, char **word, int numberOfWords)
{
	char **inputArrayString;
	int i;
	char *delimeter = " \n";

	inputArrayString = malloc(sizeof(char *) * numberOfWords);
	if (inputArrayString == NULL)
	{
		return (NULL);
	}
	*word = strtok(inputStringCopy, delimeter);

        for (i = 0; *word != NULL; i++){
            inputArrayString[i] = malloc(sizeof(char) * (strlen(*word)));
	    if (inputArrayString[i] == NULL)
	    {
		    free(inputArrayString);
		    return (NULL);
	    }
            strcpy(inputArrayString[i], *word);
            *word = strtok(NULL, delimeter);
	}
        inputArrayString[i] = NULL;
	return (inputArrayString);
}
