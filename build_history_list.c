#include "main.h"

/**
 * build_history_list - adds a new node to history list
 * @information: Struct
 * @buffer: buffer
 * @linelength: history linelength
 * Return: (0) SUCCESS
 */
int build_history_list(info_t *information, char *buff, int linelength)
{
	list_t *node;  /* NULL */

	if (information->history != NULL)
		node = information->history;

	add_node_end(&node, buff, linelength);

	if (information->history == NULL)
		information->history = node;

	return (0);
}
