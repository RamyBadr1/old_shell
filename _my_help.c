#include "main.h"

/**
 * _myhelp - changes directory of process
 * @information: Struct
 * Return: Always (0) SUCCESS
 */
int _myhelp(info_t *information)
{
	char **argument_array;

	argument_array = information->argv;

	_puts("help call works. Function not yet implemented \n");

	if (0)
		_puts(*argument_array);

	return (0);
}
