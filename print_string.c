#include "main.h"

/**
 * print_string - writes the string to stdout
 * @arguments: input string
 * @buf: buffer pointer
 * @bufindex: index for buffer pointer
 * Return: On success 1.
 */
int print_string(va_list arguments, char *buf, unsigned int bufindex)
{
	char *str;
	unsigned int i;
	char nill[] = "null";

	str = va_arg(arguments, char *);
	if (str == NULL)
	{
		for (i = 0; nill[i]; i++)
			bufindex = cat_buff(buf, nill[i], bufindex);
		return (4);
	}
	for (i = 0; str[i]; i++)
		bufindex = cat_buff(buf, str[i], bufindex);
	return (i);
}
