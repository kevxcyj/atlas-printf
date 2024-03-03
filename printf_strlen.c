#include "main.h"

/**
 * _strlen - returning the length of a string
 * @str: pointer string
 * Return: a
 */

int _strlen(char *str)
{
	int a;

	for (a = o; str[a] != 0; a++)
		;
	return (a);
}

/**
 * _strlen_c - char pointer str len
 * @str: pointer char
 * Return: a
 */

int _strlen_c(const char *str)
{
	int a;

	for (a = 0; str[a] != 0; a++)
		;
	return (a);
}
