#include "main.h"

/**
 * _printf - formatted output conversion and print data.
 * @format: input string.
 *
 * Return: number of chars printed.
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0, len = 0, bufindex = 0;
	va_list arguments;
	int (*func_ptr)(va_list, char *, unsigned int);
	char *buffer;

	va_start(arguments, format), buffer = malloc(sizeof(char) * 1024);
	if (!format || !buffer || (format[i] == '%' && !format[i + 1]))
		return (-1);
	if (!format[i])
		return (0);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{	print_buffer(buffer, bufindex);
				free(buffer);
				va_end(arguments);
				return (-1);
			}
			else
			{	func_ptr = get_func(format, i + 1);
				if (func_ptr == NULL)
				{
					if (format[i + 1] == ' ' && !format[i + 2])
						return (-1);
					cat_buff(buffer, format[i], bufindex);
					len++, i--;
				}
				else
				{
					len += func_ptr(arguments, buffer, bufindex);
					i += evaluate_func(format, i + 1);
				}
			} i++;
		}
		else
			cat_buff(buffer, format[i], bufindex), len++;
		for (bufindex = len; bufindex > 1024; bufindex -= 1024)
			;
	}
	print_buffer(buffer, bufindex), free(buffer), va_end(arguments);
	return (len);
}
