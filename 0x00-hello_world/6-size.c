#include <stdio.h>
/**
 * main - C program that prints the size of various types on vaious computer
 * Return: 0 (NoError)
 */
int main(void)
{
printf("Size of a char: %ld bytes\n", sizeof(char));
printf("Size of an int: %ld bytes\n", sizeof(int));
printf("Size of a long: %ld bytes\n", sizeof(long int));
printf("Size of a float: %ld bytes\n", sizeof(long long int));
printf("Size of a double: %ld bytes\n", sizeof(float));
return (0);
}
