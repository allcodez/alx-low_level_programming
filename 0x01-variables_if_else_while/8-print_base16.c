#include <stdio.h>
#include <unistd.h>
/**
 * main - Print base 16 numbers
 * Return:  0 (NoError)
 */
int main(void)
{
	char g;
	char e = '0';

	while (e <= '9')
	{
		putchar(e);
		e++;
	}
	for (g = 'a'; g <= 'f'; g++)
	{
		putchar(g);
	}
	putchar('\n');
	return (0);
}
