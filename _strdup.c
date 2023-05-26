#include "main.h"

/**
 * _strdup - work as strdup function
 * @string: a string
 * Return: duplicated string
 */
char *_strdup(const char *string)
{
	int length = 0;
	char *retur;

	if (!string)
		return (NULL);

	while (*string++ != 0)
		length++;

	retur = malloc(sizeof(char) * (length + 1));

	if (retur == NULL)
		return (retur);

	for (length++; length--;)
		retur[length] = *--string;
			
	return (retur);
}
