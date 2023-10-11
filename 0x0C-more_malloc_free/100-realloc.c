#include <stdlib.h>

/**
 * _realloc - A function that reallocates a memory block using malloc and free
 * @ptr: A pointer to the memory previously allocated with a call to malloc
 * @new_size: is the new size, in bytes of the new memory block
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *ptr1;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr1 = malloc(new_size);

			if (ptr1 == NULL)
			{
				return (NULL);
			}

			return (ptr1);

	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	ptr1 = malloc(new_size);
	if (ptr1 == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < new_size && i < old_size; i++)
	{
		ptr1[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (ptr1);
}
