#include "main.h"

/**
 * binary_to_uint - function that sets the value of a bit to 1 at a given index.
 * @x: A pointer to a string of 0 and 1 chars.
 *
 * Return: If x is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *x)
{
	unsigned int num = 0;
	int len = 0;

	if (x[len] == '\0')
		return (0);

	while ((x[len] == '0') || (x[len] == '1'))
	{
		num <<= 1;
		num += x[len] - '0';
		len++;
	}

	return (num);
}
