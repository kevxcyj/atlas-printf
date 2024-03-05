#include "main.h"

/**
 * _printf - switch function to print d and i 
 * @format: d and i format specifiers
 * Return: characters
 */

int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	int d_i = 0;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			switch (*format)
			{
				case 'd';
				case 'i';
				{
					int i = va_arg(args, int);
					d_i += printf("%d", i);
					break;
				}

				default:
				putchar('%');
				putchar(*format);
				d_i += 2;
				break;
			}
		} else {
			putchar(*format);
			d_i++;
		}
	}
	
	va_end(args);
	return d_i;
}
