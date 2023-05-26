#include "main.h"

/**
 * _erratoi - turn str to int
 * @string: string
 * Return: 0 || -1
 */
int _erratoi(char *string)
{
	int index = 0;
	unsigned long int result = 0;

	if (*string == '+')
		string++;  /* TODO: why does this make main return 255? */

	while(string[index] != '\0')
	{
		if (string[index] >= '0' && string[index] <= '9')
		{
			result *= 10;
			result += (string[index] - '0');
            
			if (result > INT_MAX)
				return (-1);

            index++;
		}
		else
			return (-1);
	}

	return (result);
}