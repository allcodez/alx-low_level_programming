#include <stdio.h>
#include <unistd.h>
/**
 * main - prin alphabet a-z in lowercase
 * Return: 0 (NoError)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
return (0);
}
