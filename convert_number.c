#include "main.h"

/**
 * convert_number - works as itoa
 * @number: integer
 * @base: int
 * @flags: flags of arguments
 * Return: pointer to a string
 */
char *convert_number(long int number, int base, int flags)
{
	static char *arr;
	static char buff[50];
	char sign = 0;
	char *pointer;
	unsigned long length = number;

	if ((flags & CONVERT_UNSIGNED) == 0 && number < 0)
	{
		length = -number;
		sign = '-';
	}

    if (flags & CONVERT_LOWERCASE)
        arr = "0123456789abcdef";
    else
    {
        arr = "0123456789ABCDEF";
    }
        
	pointer = &buff[49];
	*pointer = '\0';

	do	{
		*--pointer = arr[length % base];
		length /= base;
	} while (length != 0);

	if (sign != 0)
		*--pointer = sign;

	return (pointer);
}