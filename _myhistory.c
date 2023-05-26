#include "main.h"

/**
 * _myhistory - displays the history of shell
 * @information: Struct
 *  Return: Always (0) SUCCESS
 */
int _myhistory(info_t *information)
{
	print_list(information->history);
	return (0);
}
