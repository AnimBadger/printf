#include "main.h"

/**
 * _printf - function for formating input
 * @format: format parameter
 * Return: counter "lenght of formatted output"
 */

int _printf(const char *format, ...)
{
	specifiers formatters[] = 
	{
		{'c', _putchar},
		{'s', _puts},
		{'%', _print_mod}
	};
	int index, select_spec, counter;
	va_list list;

	counter = 0;
	va_start(list, format);
	for (index = 0; format[index] != '\0'; index++)
	{
		if (format[index] == '%')
		{
			format++;
			for (select_spec = 0; formatters[select_spec].id != '\0'; select_spec++)
			{
				if (format[index] == formatters[select_spec].id)
				{
					formatters[select_spec].fptr(list);
					counter += 1;
				}
			}
		}
		else
		{
			write(1, &format[index], 1);
			counter += 1;
		}
	}
	va_end(list);
	return (counter);
}
