#include "main.h"

/**
 * _strcmp - works as strcmp function.
 * @string1: the first strang
 * @string2: the second strang
 *
 * Return: negative if s1 < s2, positive if s1 > s2, zero if s1 == s2
 */
int _strcmp(char *string1, char *string2)
{
	for (;*string1 != 0 && *string2 != 0; string1++)
	{
		if (*string1 != *string2)
			return (*string1 - *string2);
		string2++;
	}
	if (*string1 == *string2)
		return (0);
	
	if (*string1 < *string2)
		return (-1);
	else 
		return (1);
}
