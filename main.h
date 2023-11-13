#ifndef MAIN_H_
#define MAIN_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

ssize_t get_number_of_characters_read(char **inputString);
char *copy_input_string(char **inputString, ssize_t numberOfCharacters);
int get_number_of_words(char *inputString, char **word);
void execute_command(char **commandWithArguments);
char **extract_commands_array();
char **split_input_into_words(char *inputString, char *inputStringCopy);
char **store_words_in_array(char *inputStringCopy, char **word, int numberOfWords);

#endif
