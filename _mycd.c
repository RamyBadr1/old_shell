#include "main.h"

/**
 * _mycd - changes the current directory of the process
 * @information: Struct
 * Return: Always (0) SUCCESS
 */
int _mycd(info_t *information)
{
	char *s, *directory;
	char buff[1024];
	int child_dir_ret;

	s = getcwd(buff, 1024);
	if (s == NULL)
		_puts("TODO: >>getcwd failure emsg here<<\n");
	if (information->argv[1] == NULL)
	{
		directory = _getenv(information, "HOME=");
		if (directory)
			child_dir_ret =
			chdir((directory = _getenv(information, "PWD=")) ? directory : "/");
		else
			child_dir_ret = chdir(directory);
	}
	else if (_strcmp(information->argv[1], "-") == 0)
	{
		if (_getenv(information, "OLDPWD=") == NULL)
		{
			_puts(s), _putchar('\n');
			return (1);
		}
		_puts(_getenv(information, "OLDPWD=")), _putchar('\n');
		child_dir_ret =
		chdir((directory = _getenv(information, "OLDPWD=")) ? directory : "/");
	}
	else
		child_dir_ret = chdir(information->argv[1]);
	if (child_dir_ret < 0)
	{
		print_error(information, "can't cd to ");
		_eputs(information->argv[1]), _eputchar('\n');
	}
	else
	{
		_setenv(information, "OLDPWD", _getenv(information, "PWD="));
		_setenv(information, "PWD", getcwd(buff, 1024));
	}
	return (0);
}
