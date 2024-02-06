#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct print - struct for printer functions
 * @type_arg: identifier
 * @f: pointer to a printer functions
 *
 * Description: struct that stores pointers to a
 * printer functions.
 */
typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int print_buffer(char *buf, unsigned int nbytes);
int _printf(const char *format, ...);
unsigned int cat_buff(char *buf, char c, unsigned int bufindex);
int print_char(va_list arguments, char *buf, unsigned int bufindex);
int print_string(va_list arguments, char *buf, unsigned int bufindex);
int evaluate_func(const char *s, int index);
int print_perc(va_list c __attribute__((unused)), char *buf, unsigned int bufindex);
int (*get_func(const char *s, int index))(va_list, char *, unsigned int);
#endif /* _MAIN_ */
