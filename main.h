#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

int _putchar(char c);
/* Function for _putchar */

int _printf(const char *format, ...);
/* Task zero, a function that produces output according to a format */

int printf_d(va_list i);
int binary(int num);
int octal(int num);


#endif
