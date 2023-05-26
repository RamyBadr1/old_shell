#include "main.h"

/**
* _strchr - work as strchr function
* @string: the string
* @c: the character to search for
* Return: a pointer to memory address or null
*/
char *_strchr(char *string, char character)
{
	do {
		if (*string == character)
			return (string);
			
	} while (*string++ != '\0');

	return (NULL);
}
