#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
    int ch = 'a';
    
    for (ch = 'a'; ch <= 'z'; ch++)
    {
        putchar(ch);
    }
    putchar(ch);
    return (0);
}
