#include "main.h"

/**
 * _eputs - works as eputs function
 * @string: character array to be printed
 */
void _eputs(char *string)
{
	int index;

	if (string != NULL)
    {
	    for (index = 0; string[index] != '\0'; index++)
		    _eputchar(string[index]);
    }
}