#include "search_algos.h"

/**
 * print_array - Prints the array being searched.
 * @array: Pointer to the first element of the array.
 * @left: Left index.
 * @right: Right index.
 *
 * Return: void
 */
void print_array(int *array, int left, int right)
{
    int i;

    printf("Searching in array: ");

    for (i = left; i < right; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("%d\n", array[i]);
}

/**
 * recurse_array - Recursively searches for the index of a value in a sorted array.
 * @array: The array to search.
 * @left: The left index.
 * @right: The right index.
 * @value: The value to search for.
 *
 * Return: The index where the value is located.
 */
int recurse_array(int *array, int left, int right, int value)
{
    int mid;

    print_array(array, left, right);
    mid = (left + right) / 2;

    if (array[mid] == value)
        return (mid);
    if (left == right)
        return (-1);
    if (value > array[mid])
        return (recurse_array(array, mid + 1, right, value));
    else
        return (recurse_array(array, left, mid - 1, value));
}

/**
 * binary_search - Searches for a value in a sorted array of integers using binary search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located. If the value is not present or the array is NULL, -1.
 */
int binary_search(int *array, size_t size, int value)
{
    if (!array)
        return (-1);

    return (recurse_array(array, 0, size - 1, value));
}
