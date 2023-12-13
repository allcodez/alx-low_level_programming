/*
 * File: 0-linear.c
 * Auth: fahdAdebayo
 */

#include "search_algos.h"

/**
 * linear_search - Locates a value in an array using linear search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index of the first occurrence of the value.
 * Description: Prints the value at each index when compared in the array.
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (array == NULL)
        return (-1);

    for (i = 0; i < size; i++)
    {
        printf("Checking array[%ld] = %d\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}
