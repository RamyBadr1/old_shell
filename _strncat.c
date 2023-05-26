#include "main.h"
/**
 *_strncat - works as strncat
 *@destination: 1st string
 *@source: 2nd string
 *@length: the length needed
 *Return: new string
 */
char *_strncat(char *destination, char *source, int length)
{
	int index, index2;
	char *string = destination;


	for (index = 0; destination[index] != '\0'; index++)
	;

	for (index2 = 0; source[index2] != '\0' && index2 < length; index2++)
	{
		destination[index] = source[index2];
		index++;
	}

	if (index2 < length)
		destination[index] = '\0';

	return (string);
}

