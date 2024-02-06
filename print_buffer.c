#include <unistd.h>

/**
 * print_buffer - writes the characters in buf to stdout
 * @buf: The characters to print
 * @nbytes: The number of bytes to print
 *
 * Return: The number of bytes printed
 */
int print_buffer(char *buf, unsigned int nbytes)
{
	return (write(1, buf, nbytes));
}
