#include "main.h"

/**
 * _puts - prints the user input
 * @string: a char array to be printed
 */
void _puts(char *string)
{
	int index;

	if (string == NULL)
		return;

	for (index = 0; string[index] != '\0'; index++)
	{
		_putchar(string[index]);
	}
}
