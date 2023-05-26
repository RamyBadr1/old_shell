#include "main.h"

/**
 * _myexit - getout of the shell
 * @information: Struct
 * Return: the status of exit
 */
int _myexit(info_t *information)
{
	int checkexit;

	if (information->argv[1] != NULL)
	{
		checkexit = _erratoi(information->argv[1]);
		if (checkexit < -1)
		{
			information->status = 2;
			print_error(information, "Illegal number: ");
			_eputs(information->argv[1]);
			_eputchar('\n');
			return (1);
		}
		information->err_num = _erratoi(information->argv[1]);
		return (-2);
	}
	information->err_num = -1;
	return (-2);
}
