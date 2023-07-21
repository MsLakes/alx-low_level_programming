#include "function_pointers.h"

/**
  * int_index - Searches for an integer in an array
  * @array: The array of integers
  * @size: The size of the array
  * @cmp: Pointer to the comparison function
  *
  * Return: The index of the first element
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (k < size)
			{
				if (cmp(array[k]))
					return (k);

				k++;
			}
		}
	}

	return (-1);
}
