#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create an array of char and initilizes
 *                it with a specific char
 *
 * @size: The size of the array to be initilized
 * @c: The specific char to initialize the array with
 *
 * Return: If size == 0 or function fails - Null.
 *         otherwise - a pointer to array
 *
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
