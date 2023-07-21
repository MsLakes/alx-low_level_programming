#include "function_pointers.h"

/**
  * array_iterator - Executes a given function on each element of an array
  * @array: The array of integers
  * @size: The size of the array
  * @action: A pointer to the function that need to be used
  *
  * Return: Nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (k < size)
		{
			action(array[k]);
			k++;
		}
	}
}
