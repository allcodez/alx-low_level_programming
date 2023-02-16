#include <stdio.h>
/**
 * main - C program that prints the size of various types on the computer it is compiled and run on
 * Return 0 (NoError)
 */

int main()
{
printf("Size of char: %ld bytes\n", sizeof(char));
printf("Size of short: %ld bytes\n", sizeof(short));
printf("Size of int: %ld bytes\n", sizeof(int));
printf("Size of long: %ld bytes\n", sizeof(long));
printf("Size of float: %ld bytes\n", sizeof(float));
printf("Size of double: %ld bytes\n", sizeof(double)); 
printf("Size of long double: %ld bytes\n", sizeof(long double)); 
return 0;
}
