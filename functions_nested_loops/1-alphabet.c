#include "main.h"

/**
 * print_alphabet - Prints alphabet in lowercase
 *
 */
void print_alphabet(void)
{
	int ch;
	ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
