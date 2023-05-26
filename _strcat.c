#include "main.h"

/**
 * _strcat - work as strcat
 * @destination: destination strig
 * @source: source strng
 * Return: destination
 */
char *_strcat(char *destination, char *source)
{
	while (*destination)
		destination++;
	while (*source)
		*destination++ = *source++;
	*destination = *source;
	return (destination);
}
