#include "main.h"

/**
 * print_char - writes the character c to stdout
 * @arguments: input char
 * @buf: buffer pointer
 * @bufindex: index for buffer pointer
 * Return: On success 1.
 */
int print_char(va_list arguments, char *buf, unsigned int bufindex)
{
	char c;

	c = va_arg(arguments, int);
	cat_buff(buf, c, bufindex);

	return (1);
}
