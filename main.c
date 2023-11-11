#include "main.h"

char **get_arguments_array( char ** inputStringCopy, char **word, int numberOfWords)
{
	char **inputArrayString;
	int i;

	inputArrayString = malloc(sizeof(char *) * numberOfWords);
	if (inputArrayString == NULL)
	{
		return (NULL);
	}
	*word = strtok(*inputStringCopy, " ");

        for (i = 0; *word != NULL; i++){
            inputArrayString[i] = malloc(sizeof(char) * (strlen(*word) + 1));
	    if (inputArrayString[i] == NULL)
	    {
		    free(inputArrayString);
		    return (NULL);
	    }
            strcpy(inputArrayString[i], *word);
            *word = strtok(NULL, " ");
	}
        inputArrayString[i] = NULL;
	return (inputArrayString);
}

int main(int argc, char *argv[])
{
	char *inputString = NULL, *inputStringCopy = NULL, *word; 
	char **inputArrayString;
	size_t inputStringLength = 0;
	ssize_t numberOfCharcters = 0;
	int numberOfWords = 0;
	(void)argv;
	
	if (argc > 1)
	{
		dprintf(2, "Error in Number of arguments \n");
	}

	while (1)
	{
		printf("#cisfun$ ");
		numberOfCharcters = get_input_string(&inputString, inputStringLength);
		if (numberOfCharcters == -1)
		{
			return (-1);
		}

		else
		{
			inputStringCopy = copy_input_string(&inputString);
			if (inputStringCopy == NULL)
			{
				free(inputStringCopy);
				return (-1);
			}
			numberOfWords = get_number_of_words(&word, &inputString);
			inputArrayString = get_arguments_array(&inputStringCopy, &word, numberOfWords);
			if (inputArrayString == NULL)
			{
				free(inputArrayString);
				return (-1);
			}
			inputArrayString[1] = "-l";
			execute_command(inputArrayString);
		}
	}
	free(inputStringCopy);
	return (0);
}
