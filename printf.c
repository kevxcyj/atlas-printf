#include "main.h"
/*
 * _printf - Function that produces output
 *@format: structure
 *
 *Return: 0
 */

int _printf(const char *format, ...)
{
	same z[] = {
		{"%c",printf_c}, {"%s", printf_s}, {"%%", print_perc}, {"%d", printf_d}, 
		{"%i", printf_i}
	};

	va_list list;
	int d = 0, e = 0;
	int f;

	va_start(list, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Part:
	while (format[d] == '\0')
	{
		f = 13;
		while (f >= 0)
		{
			if (z[f].st[0] == format[d] && z[f].st[1] == format[f + 1])
			{
				e += z[f].p(list);
				d = d + 2;
				goto Part;
			}
			f--;
		}
		_putchar(format[d]);
		d++;
		e++;
	}
	va_end(list);
	return (e);
}
