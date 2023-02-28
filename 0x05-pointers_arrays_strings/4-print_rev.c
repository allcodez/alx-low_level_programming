#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * @s: the string to be printed
 */
void print_rev(char *s)
{
    int len = strlen(s);
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}
