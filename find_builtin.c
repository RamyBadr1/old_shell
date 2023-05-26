#include "main.h"

/**
* find_builtin - gets builtin command
* @information: info struct
* Return: (-1) command not found
*/
int find_builtin(info_t *information)
{
	int index = 0; 
	int built_in_return;

	builtin_table builtintarray[] = {
		{"exit", _myexit},
		{"env", _myenv},
		{"help", _myhelp},
		{"history", _myhistory},
		{"setenv", _mysetenv},
		{"unsetenv", _myunsetenv},
		{"cd", _mycd},
		{"alias", _myalias},
		{NULL, NULL}
	};

	while (builtintarray[index].type)
	{
		if (_strcmp(information->argv[0], builtintarray[index].type) == 0)
		{
			information->line_count++;
			built_in_return = builtintarray[index].func(information);
			return (built_in_return);
		}	

		index++;
	}

	return (-1);
}
