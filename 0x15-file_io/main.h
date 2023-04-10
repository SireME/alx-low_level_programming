#ifndef __MAIN_H__
#define __MAIN_H__
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
/*
 *header file containing all the function prototypes we are
 *going to use in this project
 */
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);


#endif
