#include <unistd.h>

/**
 * _putchar - writes the character c to stdout.
 * @c: The character to print.
 *
 * Return: 1, if successful; -1 if failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}