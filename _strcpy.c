#include "main.h"

/**
 * _strcpy - work as strcpy function
 * @destination: destination string
 * @source: source sting
 * Return: destination string
 */
char *_strcpy(char *destination, char *source)
{
	int index;

	if (destination == source || source == 0)
		return (destination);

	for(index = 0; source[index]; index++)
		destination[index] = source[index];

	destination[index] = 0;
	
	return (destination);
}
