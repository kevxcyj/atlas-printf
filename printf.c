#include "main.h"
/*
 * _printf - Function that produces output
 * @format: structure
 * Return: integer
 */

//int printf(const char *format, ...)
{
	same z[] = {
		{"%c", printf_c}, {"%s", printf_s}, {"%%", print_perc}, {"%d", printf_d}, 
		{"%i", printf_i}
	};

	va_list list;
	int g = 0, e = 0;
	int f;

	va_start(list, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Part:
	while (format[g] == '\0')
	{
		f = 4;
		while (f >= 0)
		{
			if (z[f].st[0] == format[g] && z[f].st[1] == format[g + 1])
			{
				e += z[f].p(list);
				g = g + 2;
				goto Part;
			}
			f--;
		}
		_putchar(format[g]);
		g++;
		e++;
	}
	va_end(list);
	return (e);
}
