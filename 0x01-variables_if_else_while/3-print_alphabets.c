#include <stdio.h>
#include <unistd.h>
/**
 * main - print alphabet in lowercase and uppercase
 * Return:  0 (NoError)
 */
int main(void)
{
	int ch;

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
