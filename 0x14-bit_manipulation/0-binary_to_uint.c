#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars ! 0 or 1 - 0.
 *         Else - the converted num.
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	unsigned int num = 0;

	if (b[len] == '\0')
		return (0);

	while ((b[len] == '0') || (b[len] == '1'))
	{
		num <<= 1;
		num += b[len] - '0';
		len++;
	}

	return (num);
}
