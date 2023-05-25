#include "main.h"

/**
 * _atoi - turn a string to integer
 * @str: a string to be convert
 * Return: 0 if the string has no numbers || converted number otherwise
 */

int _atoi(char *str)
{
	int index = 0;
	int sign = 1; 
	int flag = 0;
	int output;
	int result = 0;

	while (str[index] != '\0' && flag != 2)
	{
		if (str[index] == '-')
			sign *= -1;

		if (str[index] >= '0' && str[index] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (str[index] - '0');
		} else if (flag == 1)
			flag = 2;

		index++;
	}

	if (sign < 0)
		output = -result;
	else
		output = result;

	return (output);
}

