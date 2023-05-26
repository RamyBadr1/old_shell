#include "main.h"

/**
 * _myenv - print out current env to stdout
 * @information: Struct
 * Return: 0
 */
int _myenv(info_t *information)
{
	print_list_str(information->env);
	return (0);
}