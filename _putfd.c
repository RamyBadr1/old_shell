#include "main.h"

/**
 * _putfd - xxxxxxxxxxxxxxxx
 * @character: print char
 * @filedescriptor: fd to write to
 * Return: 1 || -1
 */
int _putfd(char character, int filedescriptor)
{
	static int index;
	static char buffer[WRITE_BUF_SIZE];

	if (character == BUF_FLUSH || index >= WRITE_BUF_SIZE)
	{
		write(filedescriptor, buffer, index);
		index = 0;
	}

	if (character != BUF_FLUSH)
    {
        index++;
        buffer[index] = character;
    }
		
	return (1);
}