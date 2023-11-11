#ifndef MAIN_H_
#define MAIN_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

ssize_t get_input_string(char **inputString, size_t inputStringLength);
char *copy_input_string(char **inputString);
int get_number_of_words(char **word, char **inputString);
void execute_command(char **commandWithArguments);

#endif
