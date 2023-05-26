#include "main.h"

/**
 **_strncpy - work as strncpy
 *@destination: first string
 *@source: second string
 *@length: number of chars to be copy
 *Return: destination
 */
char *_strncpy(char *destination, char *source, int length)
{
	int index, index2;
	char *string = destination;

	for (index = 0; source[index] != '\0' && index < length - 1; index++)
		destination[index] = source[index];

	if (index < length)
	{
		index2 = index;
		for (;index2 < length; index2++)
			destination[index2] = '\0';
	}

	return (string);
}
