#include "main.h"

/**
 * _getenv - get an environ variable value
 * @information: Struct
 * @varname: env var name
 * Return: something
 */

char *_getenv(info_t *information, const char *varname)
{
	list_t *node = information->env;
	char *ptr;

	for (;node ; node = node->next)
	{
		ptr = starts_with(node->str, varname);

		if (ptr != NULL && *ptr != 0)
			return (ptr);
	}
	return (NULL);
}