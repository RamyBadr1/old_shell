#include "main.h"

/**
 * _realloc - reallocates memory
 * @pointer: pointer
 * @oldSize: old byte size
 * @newSize: new byte size
 * Return: pointer to da ol'block nameen.
 */
void *_realloc(void *pointer, unsigned int oldSize, unsigned int newSize)
{
	char *p;

	if (pointer == 0)
		return (malloc(newSize));
	else if (newSize == 0)
		return (free(pointer), NULL);
	else if (newSize == oldSize)
		return (pointer);

	p = malloc(newSize);

	if (!pointer)
		return (NULL);

	oldSize = oldSize < newSize ? oldSize : newSize;

	while (oldSize)
	{
		p[oldSize] = ((char *)pointer)[oldSize];
		oldSize--;
	}

	free(pointer);

	return (p);
}
