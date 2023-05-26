#include "main.h"

/**
 * _myunsetenv - delete env var
 * @information: Structure
 * Return: Always 0
 */
int _myunsetenv(info_t *information)
{
	int index = 1;

	if (information->argc == 1)
	{
		_eputs("Too few arguements.\n");
		return (1);
	}

	while (index <= information->argc) 
    {
        _unsetenv(information, information->argv[index]);
        index++;
    }

	return (0);
}