#include "holberton.h"
/**
 * get_print_func - select the function
 * @identifier: format to be printed
 * @list: pointer to structure
 * Return: function
 */
int get_print_func(char identifier, va_list list)
{

print pf[] = {
	{"c", print_char},
	{"s", print_string},
	{"%", print_porcent},
	{"d", print_integer},
	{"i", print_integer},
	{"b", print_binary},
	{"o", print_octal},
	{"x", print_min_hexa},
	{"X", print_hexa},
	{"u", print_unsig},
	{"R", print_Rot13},
	{"r", print_rev},
	{NULL, NULL}
	};
	int i = 0, length = 0;

	while (pf[i].format != NULL)
	{
		if (pf[i].format[0] == identifier)
		{
			length += pf[i].f(list);
			return (length);
		}
		i++;
	}
		if (pf[0].format[0] != identifier)
		{
			_putchar('%');
			_putchar(identifier);
			return (2);
		}
	return (0);
}
