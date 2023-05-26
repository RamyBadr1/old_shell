#include "main.h"

/**
 * dup_chars - duplicates chars
 * @pathstring: string path
 * @start: start index
 * @end: end index
 * Return: pointer to new buffer
 */
char *dup_chars(char *pathstring, int start, int end)
{
	static char buffer[1024];
	int index = start, index2 = 0;

	while (index < end)
	{
		if (pathstring[index] != ':')
		{
			index2++;
			buffer[index2] = pathstring[index];
		}
			
		index++;
	}

	buffer[index2] = 0;

	return (buffer);
}
