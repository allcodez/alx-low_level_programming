#include <unistd.h>
#include <stdio.h>
/**
 * main - prints lowercase alphabets in reverse
 * Return:  0 (NoError)
 */
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
