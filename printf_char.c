#include "main.h"

/**
 * printf_c - Prints character.
 * @las: argument
 *
 * Return 1.
 */

int printf_c(va_list las)
{
	char str;

	str = va_arg(las, int);
	_putchar(str);
	return (1);
}
