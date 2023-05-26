#include "main.h"

/**
 * _putchar - printout a char
 * @character: The char to be printed
 * Return: On success (1) || (-1) on error
 */
int _putchar(char character)
{
	static int index;
	static char buf[WRITE_BUF_SIZE];

	if (character == BUF_FLUSH)
	{
		write(1, buf, index);
		index = 0;
	}

	if (index >= WRITE_BUF_SIZE)
	{
		write(1, buf, index);
		index = 0;
	}

	if (character != BUF_FLUSH)
		buf[index++] = character;

	return (1);
}
