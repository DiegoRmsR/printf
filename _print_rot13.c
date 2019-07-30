#include "holberton.h"

/**
* print_Ror13 - print string in rot13
 * @list: string to print size
 *
 * Return: number of chars printed
*/
int print_Rot13(va_list list)
{
	unsigned int i, j;
	char *str;
	int count = 0;
	char alfabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	str = va_arg(list, char*);

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alfabet[j] != '\0'; j++)
		{
			if (str[i] == alfabet[j])
			{
				_putchar(rot13[j]);
				count++;
				break;
			}
		}
		if (!alfabet[j])
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}
