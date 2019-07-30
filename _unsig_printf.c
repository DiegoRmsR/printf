#include "holberton.h"
/**
 * print_unsig - print a unsigned integer
 * @list: size of char
 *
 * Return: 1
*/

int print_unsig(va_list list)
{
unsigned int cont, sig, num, dig, div, x;
unsigned int n = va_arg(list, unsigned int);

	cont = 1;
	dig = 1;
	sig = n;
	num = sig;
	while (num > 9)
	{
		num = num / 10;
		cont++;
		dig = dig * 10;
	}
	for (x = 1; x <= cont; x++)
	{
	div = sig / dig;
	sig = sig % dig;
	dig = dig / 10;
	_putchar (div + '0');
	}
	return (cont);
}
