#include "main.h"
#include <stdio.h>

/**
 * _printf - function for formating input
 * @format: format parameter
 * Return: counter "lenght of formatted output"
 */

int _printf(const char *format, ...)
{
	specifiers formatters[] = {
		{'c', _putchar},
		{'s', _puts},
		{'%', _print_mod},
		{'d', _print_int},
		{'i', _print_int},
		{'b', _print_binary},
		{'\0', NULL}
	};
	int index, select_spec, count;
	int len;
	va_list list;

	count = 0;
	va_start(list, format);
	for (index = 0; format[index] != '\0'; index++)
	{
		if (format[index] && format[index] == '%')
		{
			format++;
			for (select_spec = 0; formatters[select_spec].id != '\0'; select_spec++)
			{
				if (format[index] == formatters[select_spec].id)
				{
					len = formatters[select_spec].fptr(list);
					count += len;
				}
			}
		}
		else
		{
			write(1, &format[index], 1);
			count++;
		}
	}
	va_end(list);
	return (count);
}
