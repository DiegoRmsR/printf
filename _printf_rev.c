#include "holberton.h"
/**
 * print_rev - reverse the content of an array
 * @list: string to print size
 *
 * Return: number of chars printed
*/
int print_rev(va_list list)
{
	char *str;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int tmp;
	unsigned int s;
	int count = 0;

	str = va_arg(list, char*);

	if (!str)
		str = "(null)";
	while (str[i] != '\0')
	{
		i++;
	}

	for (j = i; j > 0; j--)
	{
		tmp = str[j - 1];
		_putchar(tmp);
		count++;

	}
	return (count);
}

