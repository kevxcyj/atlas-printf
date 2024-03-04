#include "main.h"

/**
 * printf_i - printing integers via conversion specifiers i
 * @i: conversion specifier i
 * Return: i
 */

int printf_i(va_list i)
{
	int a = va_arg(i, int);
	int b, c = a % 10, digit, exp = 1;
	int d = 1;

	a = a / 10;
	b = a;

	if (c < 0)
	{
		_putchar('-');
		b = -b;
		a = -a;
		c = -c;
		d++;
	}
	if (b > 0)
	{
		while (b / 10 != 0)
		{
			exp = exp * 10;
			b = b / 10;
		}
		b = a;
		while (exp > 0)
		{
			digit = b / exp;
			_putchar(digit + '0');
			b = b - (digit * exp);
			exp = exp / 10;
			d++;
		}
	}
	_putchar(c + '0');

	return (i);
}




#include "main.h"
/**
 *
 *
 *
 *
 *
 **/

int print_dec(va_list args)
