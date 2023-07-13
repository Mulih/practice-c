#include "main.h"

/**
 * print_most_numbers - Prints the numbers, from 0 to 9, except 2 & 4.
 *
 */
void print_most_numbers(void)
{
	int start = 0, stop = 9;

	while (start <= stop)
	{
		if (start != 2 && start != 4)
			_putchar(start + '0');
		start++;
	}
	_putchar('\n');
}
