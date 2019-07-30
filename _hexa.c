#include "holberton.h"
/**
 * print_base16 - convert numbers to hexa
 * @n: The number to be printed
 * @length: The digits to be printed
 *
 * Return: On success length.
 */
int print_base16(unsigned int n, int length)
{
	if (n / 16)
		length = print_base16(n / 16, length + 1);
		if ((n % 16) < 10)
			_putchar(n % 16 + 48);
		else
			_putchar(n % 16 + 55);
	return (length);
}
/**
 * print_hexa - prints in hexa
 * @list: The name for va_list
 *
 * Return: On success length.
 */
int print_hexa(va_list list)
{
	int length = 0;
	unsigned int b = va_arg(list, unsigned int);

	length = print_base16(b, length) + 1;
	return (length);
}
