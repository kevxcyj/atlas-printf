#include "main.h"

/**
 * _printf - function that prints a function
 * @format: format specifiers
 * Return: the number of characters
 */

int _printf(const char *format, ...)
{
	int a = 0;

	va_list list;
	
	if(format == NULL)
		return (1);
	
	va_start(list, format);

	while(*format)
	{
		if(*format != '%')
		{
			write(1, format, 1);
			a++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;

			if (*format == '%')
			{
				write(1, format, 1);
				a++;
			}
			else if (*format == 'c')
			{
				char c = vag_arg{list, int};
				write(1, &c, 1);
				a++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(list, char*);
				int str_len = 0;

				while (str[str_len] != '\0')
					str_len++;

				write(1, str, str_len);
				a += str_len;
			}
		}
		format++;
	}
	va_end(list);

	return a;
}
