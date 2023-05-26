#include "main.h"

/**
 * _strlen - work as strlen
 * @string: a string
 * Return: string length
 */
int _strlen(char *string)
{
	int index;

	if (string == NULL)
		return (0);
		
	for (index = 0; *string++ != 0; index++)
	;
		return (index);
}
