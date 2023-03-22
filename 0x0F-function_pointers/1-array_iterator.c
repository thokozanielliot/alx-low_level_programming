#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a function given as a parameter
 * @array: array
 * @size: size of array
 * @action: function pointer
 *
 * Return: No return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
