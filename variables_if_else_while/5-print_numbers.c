#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - print single digits
 *
 * Return: 0
 */
int main(void)
{
    int x;

    for (x = 48; x < 58; x++)
    {
        putchar(x);
    }
    putchar('\n');
    return (0);
}
