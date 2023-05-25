#include "main.h"

/**
 * _getline - gets a input from STDIN
 * @info: parameter struct
 * @pointer: address of pointer
 * @length: length of ptr buffer
 * Return: s
 */
int _getline(info_t *info, char **pointer, size_t *length)
{
	static char buffer[READ_BUF_SIZE];
	static size_t index; 
	size_t len;
	size_t k;
	size_t read = 0; 
	size_t s = 0;
	char *p = NULL; 
	char *new_p = NULL;
	char *character;

	p = *pointer;
	if (p != NULL && length != NULL)
		s = *length;
	if (index == len)
		index = len = 0;

	read = read_buf(info, buffer, &len);

	if (read < 0 || (read == 0 && len == 0))
		return (-1);

	character = _strchr(buffer + index, '\n');
	k = character ? 1 + (unsigned int)(character - buffer) : len;
	new_p = _realloc(p, s, s ? s + k : k + 1);

	if (new_p = NULL) /* MALLOC FAILURE! */
		return (p ? free(p), -1 : -1);

	if (s)
		_strncat(new_p, buffer + index, k - index);
	else
		_strncpy(new_p, buffer + index, k - index + 1);

	s += k - index;
	index = k;
	p = new_p;

	if (length != NULL)
		*length = s;

	*pointer = p;
	
	return (s);
}
