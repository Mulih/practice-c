#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int ch = 'a';

    for (ch = 'a'; ch <= 'z'; ch++)
    {
	    putchar(ch);
    }
    for (ch = 'A'; ch <= 'Z'; ch++)
    {
	    putchar(ch);
    }
    putchar('\n');
    return (0);
}
