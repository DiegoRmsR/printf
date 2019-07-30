#include "holberton.h"
/**
 * print_base16min - convert numbers to hexa
 * @n: The number to be printed
 * @length: The digits to be printed
 *
 * Return: On success length.
 */
int print_base16min(unsigned int n, int length)
{
	if (n / 16)
		length = print_base16min(n / 16, length + 1);

		if ((n % 16) < 10)
			_putchar(n % 16 + 48);
		else
			_putchar(n % 16 + 87);
	return (length);
}
/**
 * print_min_hexa - prints in hexa
 * @list: The name for va_list
 *
 * Return: On success length.
 */
int print_min_hexa(va_list list)
{
	int length = 0;
	unsigned int b = va_arg(list, unsigned int);

	length = print_base16min(b, length) + 1;
	return (length);
}
