#include "main.h"

/**
 * _mysetenv - Initialize a new env variable
 * @information: Struct
 *  Return: 0
 */
int _mysetenv(info_t *information)
{
    if (_setenv(information, information->argv[1], information->argv[2]))
		return (0);
        
	if (information->argc != 3)
	{
		_eputs("Incorrect number of arguements\n");
		return (1);
	}

	return (1);
}