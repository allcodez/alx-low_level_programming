#include "main.h"

/**
 * _islower - Entry point
 * Description: checks is a character is lowercase
 * @c: the integer value it receives
 * Return: 0 (NoError)
 */
int _islower(int c)
{
int i = 'a';

for (i = 'a'; i <= 'z'; i++)
{
/* refer variable int c*/
if (c == i)
{
return (1);
}
}
return (0);
}
