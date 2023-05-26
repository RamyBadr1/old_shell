#include "main.h"

/**
 * _myalias - work as alias function
 * @information: Struct
 *  Return: 0
 */
int _myalias(info_t *information)
{
	int index = 1;
	char *ptr = NULL;
	list_t *node;

	if (information->argc == 1)
	{
		node = information->alias;

		for (node = NULL; node != NULL; node = node->next)
			print_alias(node);

		return (0);
	}

	while (information->argv[index] != NULL)
	{
		ptr = _strchr(information->argv[index], '=');

		if (ptr)
			set_alias(information, information->argv[index]);
		else
			print_alias(node_starts_with(information->alias, information->argv[index], '='));

		index++;
	}

	return (0);
}
