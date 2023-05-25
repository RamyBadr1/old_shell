#include "main.h"

/**
 * _memset - fills memory
 * @string: pointer to memory adderss
 * @byte: byte to fill memory
 * @number: amount of bytes to be filled by @byte
 * Return: pointer to the memory address
 */
char *_memset(char *string, char byte, unsigned int number)
{
	unsigned int index = 0;

	while (index < number)
	{
		string[index] = byte;
		index++;
	}

	return (string);
}

/**
 * ffree - frees a string of strings
 * @pp: string of strings
 */
void ffree(char **pp)
{
	char **a = pp;

	if (pp == NULL)
		return;

	while (*pp)
	{
		free(*pp);
		pp++;
	}

	free(a);
}
