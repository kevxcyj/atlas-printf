#include "main.h"

/**
 * _printf - function that prints a function
 * @format: format specifiers
 * Return: the number of characters
 */

int _printf(const char *format, ...)
{
	int a = 0; /* initializes variable a so it can keep track of the characters being printed */

	va_list list; /* declaring va_list named list to have access to variable arguments */
	
	if(format == NULL) /* checks if format is NULL, if so then it returns an error */
		return (1);
	
	va_start(list, format); 

	while(*format) /* loop that iterates through character in the format string */
	{
		if(*format != '%') /* if character in format string is not a % then it prints the character and increments a */
		{
			write(1, format, 1); /* write characters to the standard output */
			a++;
		}
		else /* if the character is a % sign */
		{
			format++; /* checks the next char and then breaks our of loop */
			if (*format == '\0')
				break;

			if (*format == '%') /* conversion specifier % */
			{
				write(1, format, 1);
				a++;
			}
			else if (*format == 'c') /* conversion specifier c */
			{
				char c = va_arg(list, int);
				write(1, &c, 1);
				a++;
			}
			else if (*format == 's') /* conversion specifier s */
			{
				char *str = va_arg(list, char*); /* calculate the length of the string and prints */
				int str_len = 0;

				while (str[str_len] != '\0')
					str_len++;

				write(1, str, str_len);
				a += str_len;
			}
		}
		format++; /* loop keeps going until it ends */
	}
	va_end(list); /* closing and ending arguments */

	return a; /* returning characters */
}
