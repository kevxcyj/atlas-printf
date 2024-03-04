#include "main.h"

/**
 * printf_c - Prints character
 * @las: argument
 *
 * Return 1.
 **/

int printf_c(va_list las)
{
	char s;

	s = va_arg(las, int);
	_putchar(s);
	return (1);
}
