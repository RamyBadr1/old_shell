#include "main.h"

/**
 * _putsfd - print the input to stdout
 * @string: the input
 * @filedescriptor: filedescriptor
 * Return: the number of chars put
 */
int _putsfd(char *string, int filedescriptor)
{
	int index;

	if (!string)
    {
        for (index = 0; *string;  index += _putfd(*string++, filedescriptor))
        ;
        return (index);
    }
	
    return (0);
}