#include "main.h"

/**
 * _strcat - work as strcat function
 * @destination: the destination string
 * @source: the source string
 * Return: destination
 */
char *_strcat(char *destination, char *source)
{
	for (;*destination != 0; destination++)
	;

	while (*source != 0)
		*destination++ = *source++;

	*destination = *source;

	return (destination);
}
