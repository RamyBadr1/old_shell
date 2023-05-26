#include "main.h"

/**
 * clear_info - initializes info_t struct
 * @information: address of info_t struct in memory
 */
void clear_info(info_t *information)
{
	information->arg = NULL;
	information->argv = NULL;
	information->path = NULL;
	information->argc = 0;
}
