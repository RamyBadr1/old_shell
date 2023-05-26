#include "main.h"

/**
 * _setenv - Initialize or modify env variable,
 * @information: Struct of args
 * @variable: env string variable
 * @value: env string value
 *  Return: (0)
 */
int _setenv(info_t *information, char *variable, char *value)
{
	char *buffer = NULL;
	list_t *node;
	char *ptr;

	if (variable == NULL || value == NULL)
		return (0);

	buffer = malloc(_strlen(variable) + _strlen(value) + 2);
	if (buffer == NULL)
		return (1);
	_strcpy(buffer, variable);
	_strcat(buffer, "=");
	_strcat(buffer, value);
	node = information->env;
	for (;node != NULL;)
	{
		ptr = starts_with(node->str, variable);
		if (ptr != NULL && *ptr == '=')
		{
			free(node->str);
			node->str = buffer;
			information->env_changed = 1;
			return (0);
		}
		node = node->next;
	}
	add_node_end(&(information->env), buffer, 0);
	free(buffer);
	information->env_changed = 1;
	return (0);
}
