#include "main.h"

/**
 * _printf - function to print variables
 * @format: format parameter
 * Return: 0 means success
 */

int _printf(const char *format, ...)
{
	specifiers formatters[] = 
	{
		{'c', _putchar},
		{'s', _puts}
	};
}
