#include "main.h"

/**
 * print_numbers - Print numbers 0 to 9
 * 
 * Return: nothing
*/
void print_numbers(void)
{
    int start = 0, end = 9;

    while (start <= end)
    {
        _putchar(start + '0');
        start++;
    }
}