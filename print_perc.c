#include "main.h"

/**
 * print_perc - writes the character % to stdout
 * @c: input char
 * @buf: buffer pointer
 * @bufindex: index for buffer pointer
 * Return: On success 1.
 */
int print_perc(va_list c __attribute__((unused)),
		char *buf, unsigned int bufindex)
{
	cat_buff(buf, '%', bufindex);

	return (1);
}
