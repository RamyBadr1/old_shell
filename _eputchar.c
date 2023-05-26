#include "main.h"

/**
 * _eputchar - work as eputchar function
 * @character: char to print to stderr
 * Return: 1 || -1
 */
int _eputchar(char character)
{
	static int index;
	static char buffer[WRITE_BUF_SIZE];

	if (character == BUF_FLUSH || index >= WRITE_BUF_SIZE)
	{
		write(2, buffer, index);
		index = 0;
	}

	if (character != BUF_FLUSH)
		buffer[index++] = character;

	return (1);
}