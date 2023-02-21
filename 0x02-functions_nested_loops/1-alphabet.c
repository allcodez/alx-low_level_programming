#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: a function that prints the lowercase alphabet,
 * Return: 0 (NoError)
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
