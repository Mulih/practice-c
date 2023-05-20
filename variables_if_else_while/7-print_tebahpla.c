#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints alphabet
 *
 * Return: 0
 */
int main(void)
{
    int ch;

    for (ch = 'z'; ch >= 'a'; ch--)
    {
        putchar(ch);
    }
    putchar('\n');
    return (0);
}
