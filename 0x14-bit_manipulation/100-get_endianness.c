#include "main.h"

/**
 * get_endianness - func that checks the endianness.
 *
 * Return: If big-endian - 0.
 *         and If little-endian - 1.
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}
