#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches an integer
 * @array: pointer array
 * @size: number elements in array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: first element index,on succes or return -1
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]) != 0)
			return (j);

	}
		return (-1);
}
