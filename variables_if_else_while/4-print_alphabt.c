#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - print alphabet except q and e
 *
 * Return: 0
 */
int main(void)
{
    int ch = 'a';

    for (ch = 'a'; ch <= 'z'; ch++)
    {
        if (ch != 'q' && ch != 'e')
        {
            putchar(ch);
        }
    }
    putchar('\n');
    return (0);
}

