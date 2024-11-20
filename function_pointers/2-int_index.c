#include "function_pointers.h"
#include <stdio.h>

/**
* int_index - searches for an integer
* @array: array
* @size: sizes of array
* @cmp: pointer
*
* Return: return the index of cmp, if not work rtrn -1
*/

int int_index(int *array, int size, int (*cmp)(int))

{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
