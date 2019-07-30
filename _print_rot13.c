#include "holberton.h"
/**
* print_R - prints a string in rot13
 * @R: string to print
 *
 * Return: number of chars printed
*/
int print_R(va_list list)
{
	int i, j;
	char *str;
	unsigned int count = 0;
	char alfabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	str = va_arg(R char*);

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alfabet[j] != '\0'; j++)
		{
			if (str[i] == alfabet[j])
			{
				_putchar(rot13[j];)
				count++;
				break;
			}
		}
		if (!alfabet[j])
		{
			_putchar(str[i])
			count++;
		}
	}
	return (count);
}
