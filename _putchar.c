#include "main.h"

/**
 * _putchar - Writes the character c
 * @c: What to print
 *
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
