#include <stdio.h>
#include <unistd.h>
/**
 * main - program to print numbers
 * Return:  0 (NoError)
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9' ; c++)
	{
		putchar(c);

		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
