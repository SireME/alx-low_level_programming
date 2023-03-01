#ifndef MAIN_H
#define MAIN_H

/*
 * File: main.h
 *
 * Desc: Header file containing declartions for all function
 */

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *n);
char *cap_string(char *);
int _putchar(char c);
int _abs(int);
int _isupper(int c);
int _isdigit(int c);


#endif

