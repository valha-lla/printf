#include "main.h"

/**
 * cat_buff - concatenates the buffer characters
 * @buf: buffer pointer
 * @c: charcter to concatenate
 * @bufindex: index of buffer pointer
 * Return: index of buffer pointer.
 */
unsigned int cat_buff(char *buf, char c, unsigned int bufindex)
{
	if (bufindex == 1024)
	{
		print_buffer(buf, bufindex);
		bufindex = 0;
	}
	buf[bufindex] = c;
	bufindex++;
	return (bufindex);
}
