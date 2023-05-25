#include "main.h"

/**
 * _getline - gets input from STDIN
 * @info: struct
 * @pointer: address of ptr to buffer
 * @length: length of ptr buffer
 * Return: size_t value
 */
int _getline(info_t *info, char **pointer, size_t *length)
{
	static char buf[READ_BUF_SIZE];
	static size_t i;
	static size_t len;
	size_t k;
	ssize_t read = 0;
	ssize_t s = 0;
	char *p = NULL;
	char *new_p = NULL;
	char *c;

	p = *pointer;
	if (p != NULL && length != NULL)
		s = *length;
	if (i == len)
		i = len = 0;

	read = read_buf(info, buf, &len);
	if (read < 0 || (read == 0 && len == 0))
		return (-1);

	c = _strchr(buf + i, '\n');
	k = c ? 1 + (unsigned int)(c - buf) : len;
	new_p = _realloc(p, s, s ? s + k : k + 1);
	if (new_p == NULL) /* MALLOC FAILURE! */
		return (p ? free(p), -1 : -1);

	if (s != 0)
		_strncat(new_p, buf + i, k - i);
	else
		_strncpy(new_p, buf + i, k - i + 1);

	s += k - i;
	i = k;
	p = new_p;

	if (length)
		*length = s;
	*pointer = p;
	return (s);
}
